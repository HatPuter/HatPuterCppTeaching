#include "../include/GameMain.h"
#include "../include/Creator.h"
#include "../include/Attention.h"
#include "../include/Menu.h"
#include "../include/ContentWindow.h"
#include "ui_gamemain.h"

#include <QKeyEvent>
#include <cstdlib>

GameMain::GameMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMain)
    , m_currentUI(nullptr)
{
    ui->setupUi(this);
    this->hide(); // 隐藏当前页面

    // 全屏
    this->showFullScreen();

    // 进入制作者页面
    Creator *creator = new Creator(this);
    GameMain::SwitchToUI(creator);
    // 进入注意页面
    connect(creator, &Creator::Finished, this, [this, creator]() {
        creator->deleteLater(); // 释放当前页面
        Attention *attention = new Attention(this);
        GameMain::SwitchToUI(attention);

        // 进入菜单页面
        connect(attention, &Attention::Finished, this, [this, attention]() {
            attention->deleteLater();
            Menu *menu = new Menu(this);
            GameMain::SwitchToUI(menu);
        });
    });
}

GameMain::~GameMain()
{
    delete ui;
}

// 键盘事件
void GameMain::keyPressEvent(QKeyEvent *event)
{
    // 全屏
    if (event->key() == Qt::Key_F11) {
        if (this->isFullScreen() == false) {
            this->showFullScreen();
        }
        else {
            this->showNormal();
        }
        return;
    }

    // 子窗口继承
    for (auto *child : findChildren<QWidget *>()) {
        if (child->isVisible() && child != m_currentUI && child != this) {
            QCoreApplication::sendEvent(child, event);
            return;
        }
    }

    if (m_currentUI != nullptr) {
        QCoreApplication::sendEvent(m_currentUI, event);
    }
}

// 切换UI
void GameMain::SwitchToUI(QWidget *ui)
{
    m_currentUI = ui;
    m_currentUI->setGeometry(this->rect());
    m_currentUI->show();
}

// 调整大小事件
void GameMain::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    if (m_currentUI != nullptr) {
        m_currentUI->setGeometry(this->rect());
    }
}
