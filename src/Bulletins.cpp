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

// 显示公告
void Menu::ShowBulletins()
{
    // ===== 网络：从 GitHub 拉公告 =====
    static QNetworkAccessManager bulletinNetworkManager;

    QUrl bulletinJsonUrl(
        "https://raw.githubusercontent.com/"
        "HatPuter/HatPuterCppTeaching-Server/"
        "main/Bulletins/Bulletins.json"
    );

    QNetworkRequest bulletinRequest(bulletinJsonUrl);
    bulletinRequest.setAttribute(
        QNetworkRequest::RedirectPolicyAttribute,
        QNetworkRequest::NoLessSafeRedirectPolicy
        );

    QNetworkReply* networkReply = bulletinNetworkManager.get(bulletinRequest);

    // ===== 收到数据后解析并渲染 =====
    QObject::connect(networkReply, &QNetworkReply::finished, this, [this, networkReply] {

        QByteArray rawJsonData = networkReply->readAll();
        QJsonDocument jsonDocument = QJsonDocument::fromJson(rawJsonData);
        QJsonArray bulletinArray = jsonDocument.object()["bulletins"].toArray();

        auto* bulletinModel = new QStandardItemModel(this);

        // ===== 逐条转成列表项 =====
        for (const QJsonValue& bulletinValue : bulletinArray) {
            QJsonObject bulletinObject = bulletinValue.toObject();

            QString title   = bulletinObject["title"].toString();
            QString content = bulletinObject["content"].toString();
            QString category = bulletinObject["category"].toString();

            auto* item = new QStandardItem(title + " · " + content);

            // ===== 按分类上色 =====
            if (category == "Important") {
                item->setForeground(Qt::red);
            }
            else if (category == "Moderate") {
                item->setForeground(Qt::yellow);
            }
            else {
                item->setForeground(Qt::white);
            }

            bulletinModel->appendRow(item);
        }

        // 显示公告
        ui->BulletinsBoard->setModel(bulletinModel);
        ui->BulletinsBoard->setResizeMode(QListView::Adjust);

        networkReply->deleteLater();
    });
}
