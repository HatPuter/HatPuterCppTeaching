#include "../include/Menu.h"
#include "../include/Animation.h"
#include "ui_Menu.h"

#include <QEvent>
#include <QMouseEvent>

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
    , m_menuOptions(MenuOptions::StartGame)
{
    ui->setupUi(this);
    Menu::ShowBulletins(); // 显示公告

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
    install(ui->Settings);
    install(ui->Exit);

    Menu::DisplayOptions(); // 显示选项
}

Menu::~Menu()
{
    delete ui;
}
