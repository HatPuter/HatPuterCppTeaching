#include "../include/Menu.h"
#include "../include/Animation.h"
#include "../include/Bulletins.h"
#include "ui_Menu.h"

#include <QEvent>
#include <QMouseEvent>

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
    , m_bulletins(new Bulletins(this))
    , m_menuOptions(MenuOptions::StartGame)
{
    ui->setupUi(this);
    ui->BulletinsBoard->setFocusPolicy(Qt::NoFocus); // 禁止公告栏获取焦点
    this->setAttribute(Qt::WA_StyledBackground, true);

    // 连接公告栏点击事件
    connect(ui->BulletinsBoard, &QListView::pressed, this, &Menu::on_BulletinsBoard_clicked);

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

// 公告选项被点击
void Menu::on_BulletinsBoard_clicked(const QModelIndex &index)
{
    // 获取当前选项的文本色
    const QBrush brush = index.data(Qt::ForegroundRole).value<QBrush>();

    // 设置当前选项的文本色
    QPalette palette = ui->BulletinsBoard->palette();

    palette.setColor(QPalette::Active, QPalette::HighlightedText, brush.color());
    palette.setColor(QPalette::Inactive, QPalette::HighlightedText, brush.color());

    // 应用
    ui->BulletinsBoard->setPalette(palette);
}
