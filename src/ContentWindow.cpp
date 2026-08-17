#include "../include/ContentWindow.h"
#include "ui_ContentWindow.h"

#include <QKeyEvent>

ContentWindow::ContentWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ContentWindow)
{
    ui->setupUi(this);
    //this->setFocusPolicy(Qt::StrongFocus); // 允许获得键盘焦点
}

ContentWindow::~ContentWindow()
{
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

// 键盘事件
void ContentWindow::keyPressEvent(QKeyEvent *event)
{
    // 按下空格键退出
    if (event->key() == Qt::Key_Space) {
        this->hide();
    }
}

// 调整大小事件
void ContentWindow::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    if (parentWidget() != nullptr) {
        setGeometry(parentWidget()->rect());
    }
}
