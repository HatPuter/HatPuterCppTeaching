#include "../include/Menu.h"
#include "ui_Menu.h"

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

// 公告绘制
class BulletinsDelegate : public QStyledItemDelegate {
public:
    explicit BulletinsDelegate(QObject* parent = nullptr)
        : QStyledItemDelegate(parent) {}

    void paint(QPainter* painter,
               const QStyleOptionViewItem& styleOption,
               const QModelIndex& modelIndex) const override
    {
        QStyleOptionViewItem viewItemOption = styleOption;
        initStyleOption(&viewItemOption, modelIndex);

        QString bulletinsTitle = modelIndex.data(Qt::DisplayRole).toString();
        QString bulletinsTime = modelIndex.data(Qt::UserRole + 1).toString();
        QString bulletinsCategory = modelIndex.data(Qt::UserRole).toString();

        viewItemOption.text = QString();
        QApplication::style()->drawControl(
            QStyle::CE_ItemViewItem,
            &viewItemOption,
            painter,
            viewItemOption.widget
        );

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

        painter->drawText(
            viewItemOption.rect.adjusted(8, 0, 0, 0),
            Qt::AlignVCenter | Qt::AlignLeft,
            elidedTitle
        );

        // 时间
        painter->setPen(Qt::gray);
        painter->drawText(
            viewItemOption.rect.adjusted(0, 0, -8, 0),
            Qt::AlignVCenter | Qt::AlignRight,
            fm.elidedText(bulletinsTime, Qt::ElideRight, timeWidth)
        );

        painter->restore();
    }
};

// 显示公告
void Menu::ShowBulletins()
{
    // 正在获取提示
    auto* noteModel = new QStandardItemModel(this);
    noteModel->appendRow(new QStandardItem("正在获取公告..."));
    noteModel->item(0)->setForeground(Qt::gray);

    ui->BulletinsBoard->setModel(noteModel);
    ui->BulletinsBoard->setResizeMode(QListView::Adjust);

    // 绑定delegate
    static bool delegateInstalled = false;
    if (!delegateInstalled) {
        ui->BulletinsBoard->setItemDelegate(new BulletinsDelegate(ui->BulletinsBoard));
        delegateInstalled = true;
    }

    // 获取公告文件
    static QNetworkAccessManager bulletinNetworkManager;

    QUrl bulletinsJsonUrl("https://raw.githubusercontent.com/HatPuter/HatPuterCppTeaching-Server/main/Bulletins/Bulletins.json");

    QNetworkRequest bulletinsRequest(bulletinsJsonUrl);
    bulletinsRequest.setAttribute(
        QNetworkRequest::RedirectPolicyAttribute,
        QNetworkRequest::NoLessSafeRedirectPolicy
    );

    QNetworkReply* networkReply = bulletinNetworkManager.get(bulletinsRequest);

    QObject::connect(networkReply, &QNetworkReply::finished, this, [this, networkReply] {
        auto* fallbackModel = new QStandardItemModel(this);

        // 网络错误
        if (networkReply->error() != QNetworkReply::NoError) {
            fallbackModel->appendRow(new QStandardItem("公告获取失败"));
            fallbackModel->item(0)->setForeground(Qt::gray);
            ui->BulletinsBoard->setModel(fallbackModel);
            networkReply->deleteLater();
            return;
        }

        // 解析错误
        QJsonDocument jsonDocument = QJsonDocument::fromJson(networkReply->readAll());
        if (jsonDocument.isNull()) {
            fallbackModel->appendRow(new QStandardItem("公告文件解析错误"));
            fallbackModel->item(0)->setForeground(Qt::gray);
            ui->BulletinsBoard->setModel(fallbackModel);
            networkReply->deleteLater();
            return;
        }

        auto* bulletinsModel = new QStandardItemModel(this);
        QJsonArray bulletinsArray = jsonDocument.object()["bulletins"].toArray();

        // 添加至列表
        for (const QJsonValue& bulletinsValue : bulletinsArray) {
            QJsonObject bulletinObject = bulletinsValue.toObject();

            QString title = bulletinObject["title"].toString();
            QString time = bulletinObject["time"].toString();
            QString category = bulletinObject["category"].toString();

            auto* item = new QStandardItem(title);
            item->setData(time, Qt::UserRole + 1);
            item->setData(category, Qt::UserRole);

            bulletinsModel->appendRow(item);
        }

        ui->BulletinsBoard->setModel(bulletinsModel);
        networkReply->deleteLater();
    });
}
