#include "../include/Menu.h"
#include "../include/ContentWindow.h"
//#include "ui_Menu.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QStandardItemModel>
#include <QColor>
#include <QListView>
#include <QStyledItemDelegate>
#include <QPainter>
#include <QApplication>
#include <QStyle>

// 公告绘制
class BulletinsDelegate : public QStyledItemDelegate {
public:
    explicit BulletinsDelegate(QObject* parent = nullptr)
        : QStyledItemDelegate(parent) {}

    void paint(QPainter* painter, const QStyleOptionViewItem& styleOption, const QModelIndex& modelIndex) const override
    {
        // 获取当前控件状态
        QStyleOptionViewItem viewItemOption = styleOption;
        initStyleOption(&viewItemOption, modelIndex);

        // 保存信息
        QString bulletinsTitle = modelIndex.data(Qt::DisplayRole).toString();
        QString bulletinsTime = modelIndex.data(Qt::UserRole + 1).toString();
        QString bulletinsCategory = modelIndex.data(Qt::UserRole).toString();

        viewItemOption.text = QString(); // 清空当前选项内容
        // 根据状态绘制背景色
        const QWidget *widget = viewItemOption.widget;
        QStyle *style = widget != nullptr ? widget->style() : QApplication::style();
        style->drawControl(
            QStyle::CE_ItemViewItem,
            &viewItemOption,
            painter,
            widget
        );

        // 保存
        painter->save();

        // 获取时间宽度
        QFontMetrics fm = painter->fontMetrics();
        int timeWidth = fm.horizontalAdvance(bulletinsTime) + 24; // 留下边距

        // 标题可用区域
        int titleMaxWidth = viewItemOption.rect.width() - timeWidth - 16;

        // 标题长度省略(太长时)
        QString elidedTitle = fm.elidedText(
            bulletinsTitle,
            Qt::ElideRight,
            titleMaxWidth
        );

        // 标题颜色
        if (bulletinsCategory == "Important") {
            painter->setPen(Qt::red);
        }
        else if (bulletinsCategory == "Moderate") {
            painter->setPen(Qt::yellow);
        }
        else {
            painter->setPen(Qt::white);
        }

        // 绘制标题
        painter->drawText(
            viewItemOption.rect.adjusted(8, 0, 0, 0),
            Qt::AlignVCenter | Qt::AlignLeft,
            elidedTitle
        );

        // 绘制时间
        painter->setPen(Qt::gray);
        painter->drawText(
            viewItemOption.rect.adjusted(0, 0, -8, 0),
            Qt::AlignVCenter | Qt::AlignRight,
            fm.elidedText(bulletinsTime, Qt::ElideRight, timeWidth)
        );

        // 恢复状态
        painter->restore();
    }
};

// 显示公告
void Menu::ShowBulletins(QListView *BulletinsBoard)
{
    // 正在获取提示
    auto* noteModel = new QStandardItemModel(this);
    noteModel->appendRow(new QStandardItem("正在获取公告..."));
    noteModel->item(0)->setForeground(Qt::gray);

    BulletinsBoard->setModel(noteModel);
    BulletinsBoard->setResizeMode(QListView::Adjust);

    // 绑定delegate
    static bool delegateInstalled = false;
    if (delegateInstalled == false) {
        BulletinsBoard->setItemDelegate(new BulletinsDelegate(BulletinsBoard));
        delegateInstalled = true;
    }

    // 点击公告跳转内容页
    QObject::connect(BulletinsBoard, &QListView::clicked, this, [this, BulletinsBoard](const QModelIndex &index) {
        if (index.isValid() == false) {
            return;
        }
        else if (m_ifSetBulletins == false) {
            BulletinsBoard->clearSelection(); // 取消列表选中状态
            return;
        }

        QString title = index.data(Qt::DisplayRole).toString();
        QString content = index.data(Qt::UserRole + 2).toString();
        QString category = index.data(Qt::UserRole).toString();

        // 内容窗
        m_contentWindow = new ContentWindow(this);
        m_contentWindow->show();
        m_contentWindow->ShowContentWindow(title, content, category);

        BulletinsBoard->clearSelection(); // 取消列表选中状态
    });

    // 获取公告文件
    static QNetworkAccessManager bulletinNetworkManager;

    QUrl bulletinsJsonUrl("https://raw.githubusercontent.com/HatPuter/HatPuterCppTeaching-Server/main/Bulletins/Bulletins.json");

    QNetworkRequest bulletinsRequest(bulletinsJsonUrl);
    bulletinsRequest.setAttribute(
        QNetworkRequest::RedirectPolicyAttribute,
        QNetworkRequest::NoLessSafeRedirectPolicy
    );

    QNetworkReply* networkReply = bulletinNetworkManager.get(bulletinsRequest);

    QObject::connect(networkReply, &QNetworkReply::finished, this, [this, networkReply, BulletinsBoard] {
        auto* fallbackModel = new QStandardItemModel(this);

        // 网络错误
        if (networkReply->error() != QNetworkReply::NoError) {
            fallbackModel->appendRow(new QStandardItem("公告获取失败"));
            fallbackModel->item(0)->setForeground(Qt::gray);
            BulletinsBoard->setModel(fallbackModel);
            networkReply->deleteLater();
            return;
        }

        // 解析错误
        QJsonDocument jsonDocument = QJsonDocument::fromJson(networkReply->readAll());
        if (jsonDocument.isNull()) {
            fallbackModel->appendRow(new QStandardItem("公告文件解析错误"));
            fallbackModel->item(0)->setForeground(Qt::gray);
            BulletinsBoard->setModel(fallbackModel);
            networkReply->deleteLater();
            return;
        }

        m_ifSetBulletins = true; // 成功获取公告

        auto* bulletinsModel = new QStandardItemModel(this);
        QJsonArray bulletinsArray = jsonDocument.object()["bulletins"].toArray();

        // 添加至列表
        for (const QJsonValue& bulletinsValue : bulletinsArray) {
            QJsonObject bulletinObject = bulletinsValue.toObject();

            QString title = bulletinObject["title"].toString();
            QString time = bulletinObject["time"].toString();
            QString category = bulletinObject["category"].toString();
            QString content = bulletinObject["content"].toString();

            auto* item = new QStandardItem(title);
            item->setData(time, Qt::UserRole + 1);
            item->setData(category, Qt::UserRole);
            item->setData(content, Qt::UserRole + 2);

            bulletinsModel->appendRow(item);
        }

        BulletinsBoard->setModel(bulletinsModel);
        networkReply->deleteLater();
    });
}
