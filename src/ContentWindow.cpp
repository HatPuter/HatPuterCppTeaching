#include "../include/ContentWindow.h"
#include "ui_ContentWindow.h"

#include <QKeyEvent>
#include <QApplication>

ContentWindow::ContentWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ContentWindow)
{
    ui->setupUi(this);
    // 安装事件过滤器到 QApplication，全局捕获按键，无需抢焦点
    qApp->installEventFilter(this);
}

ContentWindow::~ContentWindow()
{
    qApp->removeEventFilter(this);
    delete ui;
}

// 显示内容窗
void ContentWindow::ShowContentWindow(QString title, QString content, QString category)
{
    ui->Title->setText(title);
    ui->Content->setText(content);

    this->setStyleSheet("QWidget#ContentWindow { background-color: rgba(255, 255, 255, 100); }");
    if (category == "Ordinary") {
        ui->Title->setStyleSheet("QLabel#Title { color: white; font-size: 42px; }");
    }
    else if (category == "Moderate") {
        ui->Title->setStyleSheet("QLabel#Title { color: yellow; font-size: 42px; }");
    }
    else {
        ui->Title->setStyleSheet("QLabel#Title { color: red; font-size: 42px; }");
    }
    ui->Content->setStyleSheet(R"(
        QTextBrowser#Content {
            background-color: transparent;
            border-color: white;
            border-width: 2px;
            border-style: solid;
            border-radius: 6px;
            color: white;
            font-size: 24px;
        }
    )");

    // 铺满父窗口
    if (parentWidget() != nullptr) {
        setGeometry(parentWidget()->rect());
    }

    this->show();
    this->raise();
}

// 事件过滤器：无需焦点即可捕获空格键
bool ContentWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Space && this->isVisible()) {
            this->hide();
            return true; // 事件已处理，不再传递
        }
    }
    return QWidget::eventFilter(obj, event);
}
