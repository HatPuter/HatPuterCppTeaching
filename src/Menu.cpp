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

    ui->BulletinsBoard->viewport()->installEventFilter(this);

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

// 事件过滤器
bool Menu::eventFilter(QObject* object, QEvent* event)
{
    /// 菜单选项
    // 触碰
    if (event->type() == QEvent::Enter) {
        if (object == ui->StartGame) {
            m_menuOptions = MenuOptions::StartGame;
        }
        else if (object == ui->ContinueGame) {
            m_menuOptions = MenuOptions::ContinueGame;
        }
        else if (object == ui->Settings) {
            m_menuOptions = MenuOptions::Settings;
        }
        else if (object == ui->Exit) {
            m_menuOptions = MenuOptions::Exit;
        }

        DisplayOptions();
    }
    // 点击
    if (event->type() == QEvent::MouseButtonRelease) {
        auto* me = static_cast<QMouseEvent*>(event);
        if (me->button() == Qt::LeftButton) {
            switch (m_menuOptions) {
            case MenuOptions::StartGame:
                break;
            case MenuOptions::ContinueGame:
                break;
            case MenuOptions::Settings:
                break;
            case MenuOptions::Exit:
                QApplication::quit();
                break;
            }
        }
    }

    // 近期公告
    if (object == ui->BulletinsBoard->viewport()) {
        if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);

            QModelIndex index = ui->BulletinsBoard->indexAt(mouseEvent->pos());
            ui->BulletinsBoard->clearSelection();
        }
    }

    return QWidget::eventFilter(object, event);
}
