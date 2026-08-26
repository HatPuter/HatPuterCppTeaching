#include "../include/Menu.h"
#include "../include/Animation.h"
#include "../include/Bulletins.h"
#include "ui_Menu.h"

#include <QEvent>
#include <QMouseEvent>
#include <QTimer>

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
    , m_bulletins(new Bulletins(this))
    , m_menuOptions(MenuOptions::StartGame)
{
    ui->setupUi(this);
    ui->BulletinsBoard->setFocusPolicy(Qt::NoFocus); // 禁止公告栏获取焦点
    this->setAttribute(Qt::WA_StyledBackground, true);

    m_bulletins->ShowBulletins(ui->BulletinsBoard); // 显示公告

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

    Menu::ShowOptions(); // 显示选项
}

Menu::~Menu()
{
    delete ui;
}
