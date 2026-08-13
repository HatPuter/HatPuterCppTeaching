#include "../include/Menu.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QStandardItemModel>
#include <QColor>

// 获取公告
void Menu::SetBulletins()
{
    static QNetworkAccessManager mgr;

    QNetworkRequest req(QUrl(
        "https://raw.githubusercontent.com/"
        "HatPuter/HatPuterCppTeaching-Server/"
        "main/Bulletins/Bulletins.json"
    ));
    req.setAttribute(QNetworkRequest::FollowRedirectsAttribute, true);

    QNetworkReply* reply = mgr.get(req);

    QObject::connect(reply, &QNetworkReply::finished, this, [this, reply] {
        qDebug() << "HTTP error:" << reply->error();
        qDebug() << "errorString:" << reply->errorString();
        qDebug() << "url:" << reply->url();

        reply->deleteLater();

        if (reply->error() != QNetworkReply::NoError)
            //return;

        QJsonDocument doc = QJsonDocument::fromJson(reply->readAll());
        QJsonArray arr = doc["bulletins"].toArray();

        auto* model = new QStandardItemModel(this);

        for (auto v : arr) {
            QJsonObject o = v.toObject();

            QString line = o["title"].toString()
                         + " · "
                         + o["content"].toString();

            auto* item = new QStandardItem(line);

            if (o["category"] == "Important")
                item->setForeground(Qt::yellow);
            else if (o["category"] == "Moderate")
                item->setForeground(QColor(255, 200, 100));
            else
                item->setForeground(Qt::white);

            model->appendRow(item);
        }

        ui->BulletinsBoard->setModel(model);
        ui->BulletinsBoard->setResizeMode(QListView::Adjust);
    });
}

// 显示公告
void Menu::ShowBulletins()
{
    SetBulletins();
}
