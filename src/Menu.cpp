#include "../include/Menu.h"
#include "../include/Animation.h"
#include "ui_Menu.h"

#include <QkeyEvent>

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
    , menuOptions(1)
{
    ui->setupUi(this);

    Animation::RunAnimation(this, {
        Animation::FadeInOrOut(this, 0.0, 1.0, 500)
    }, false, [this]() {
        emit Finished(); // 发送函数执行结束信号(但前面条件是false)
    });

    // 安装菜单选项监听
    auto install = [this](QLabel* label) {
        label->setAttribute(Qt::WA_Hover);
        label->installEventFilter(this);
    };
    install(ui->StartGame);
    install(ui->ContinueGame);
    install(ui->Setting);
    install(ui->Exit);

    Menu::DisplayOptions(); // 显示选项
}

Menu::~Menu()
{
    delete ui;
}

// 键盘事件
void Menu::keyPressEvent(QKeyEvent *event)
{
    // 上键
    if (event->key() == Qt::Key_Up) {
        switch (menuOptions) {
        case 1:
            menuOptions = 4;
            break;
        case 2:
            menuOptions = 1;
            break;
        case 3:
            menuOptions = 2;
            break;
        case 4:
            menuOptions = 3;
            break;
        }
    }
    // 下键
    else if (event->key() == Qt::Key_Down) {
        switch (menuOptions) {
        case 1:
            menuOptions = 2;
            break;
        case 2:
            menuOptions = 3;
            break;
        case 3:
            menuOptions = 4;
            break;
        case 4:
            menuOptions = 1;
            break;
        }
    }
    // 回车确认键
    else if (event->key() == Qt::Key_Return or event->key() == Qt::Key_Enter) {
        switch (menuOptions) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            exit(0);
            break;
        }
    }

    Menu::DisplayOptions(); // 显示选项
}

// 事件过滤器(菜单选项触碰)
bool Menu::eventFilter(QObject* object, QEvent* event) {
    // 选项被触碰
    if (event->type() == QEvent::Enter) {
        if (object == ui->StartGame) {
            menuOptions = 1;
        }
        else if (object == ui->ContinueGame) {
            menuOptions = 2;
        }
        else if (object == ui->Setting) {
            menuOptions = 3;
        }
        else if (object == ui->Exit) {
            menuOptions = 4;
        }

        DisplayOptions();
    }

    // 选项被点击
    if (event->type() == QEvent::MouseButtonRelease) {
        auto* me = static_cast<QMouseEvent*>(event);
        if (me->button() == Qt::LeftButton) {
            switch (menuOptions) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                exit(0);
                break;
            }
        }
    }

    return QWidget::eventFilter(object, event);
}

// 显示选项
void Menu::DisplayOptions()
{
    switch (menuOptions) {
    case 1:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: Yellow; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: White; font-size: 32px;}");
        ui->Setting->setStyleSheet("QLabel#Setting {color: White; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: White; font-size: 32px;}");
        break;
    case 2:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: White; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: Yellow; font-size: 32px;}");
        ui->Setting->setStyleSheet("QLabel#Setting {color: White; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: White; font-size: 32px;}");
        break;
    case 3:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: White; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: White; font-size: 32px;}");
        ui->Setting->setStyleSheet("QLabel#Setting {color: Yellow; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: White; font-size: 32px;}");
        break;
    case 4:
        ui->StartGame->setStyleSheet("QLabel#StartGame {color: White; font-size: 32px;}");
        ui->ContinueGame->setStyleSheet("QLabel#ContinueGame {color: White; font-size: 32px;}");
        ui->Setting->setStyleSheet("QLabel#Setting {color: White; font-size: 32px;}");
        ui->Exit->setStyleSheet("QLabel#Exit {color: Yellow; font-size: 32px;}");
        break;
    }
}
