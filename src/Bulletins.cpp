#include "../include/Bulletins.h"

#include <QString>
// 公告解析
#include <QByteArray>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
// 获取公告
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
// 公告栏
#include <QListView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QStyledItemDelegate>

Bulletins::Bulletins(QWidget *parent)
    : QWidget(parent)
    , m_ifSetBulletins(false)
{
    // nullptr;
}

Bulletins::~Bulletins()
{
    delete m_bulletinsBoard;
}

// 展示公告
void Bulletins::ShowBulletins(QListView *bulletinsBoard)
{
    // 设置全局变量
    m_bulletinsBoard = bulletinsBoard;

    // 提示正在获取公告
    QStandardItemModel *model = new QStandardItemModel(m_bulletinsBoard);
    model->appendRow(new QStandardItem("正在获取公告..."));
    m_bulletinsBoard->setModel(model); // 添加到公告栏

    /* 获取公告 */
    QNetworkAccessManager *networkManager = new QNetworkAccessManager(this); // 创建网络请求对象
    QNetworkRequest networkRequest(QUrl("https://raw.githubusercontent.com/HatPuter/HatPuterCppTeaching-Server/refs/heads/main/Bulletins/Bulletins.json")); // 公告文件地址
    auto *networkReply = networkManager->get(networkRequest);

    QObject::connect(networkReply, &QNetworkReply::finished, this, [this, networkReply] {
        // 获取公告失败
        if (networkReply->error() != QNetworkReply::NoError) {
            QStandardItemModel *model = new QStandardItemModel(m_bulletinsBoard);
            model->appendRow(new QStandardItem("公告获取失败: " + networkReply->errorString()));
            m_bulletinsBoard->setModel(model);
            networkReply->deleteLater();

            return;
        }

        // 获取公告成功
        m_ifSetBulletins = true;

        /* 解析Json */
        // 创建对象
        QByteArray jsonData = networkReply->readAll();
        QJsonParseError parseJsonError;
        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonData, &parseJsonError);

        // 操作对象
        const QJsonObject jsonObject = jsonDocument.object();

        // 遍历公告列表
        QJsonArray bulletinsArray = jsonObject["bulletins"].toArray();

        QStandardItemModel *titleModel = new QStandardItemModel(m_bulletinsBoard); // 标题
        for (int i = 0; i < bulletinsArray.size(); i++) {
            // 获取当前项
            QJsonObject bulletinObject = bulletinsArray[i].toObject();
            
            QString bulletinTitle = bulletinObject["title"].toString(); // 标题
            QString bulletinTime = bulletinObject["time"].toString(); // 时间
            QString bulletinCategory = bulletinObject["category"].toString(); // 级别

            auto *item = new QStandardItem(bulletinTitle + "   " + bulletinTime);
            item->setData(bulletinCategory, Qt::UserRole); // 保存选项级别
            if (bulletinCategory == "Important") {
                item->setForeground(QBrush(Qt::red));
            }
            else if (bulletinCategory == "Moderate") {
                item->setForeground(QBrush(Qt::yellow));
            }
            else {
                item->setForeground(QBrush(Qt::white));
            }

            // 添加到列表
            titleModel->appendRow(item);
        }

        m_bulletinsBoard->setModel(titleModel); // 添加到公告栏

        networkReply->deleteLater();
    });
}
