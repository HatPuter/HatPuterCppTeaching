#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

    void DisplayOptions(); // 显示选项
    void SetBulletins(); // 获取公告
    void ShowBulletins(); // 显示公告

signals:
    void Finished(); // 函数执行结束信号

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件
    bool eventFilter(QObject* object, QEvent* event) override; // 事件过滤器(菜单选项触碰)

private:
    Ui::Menu *ui;

    // 菜单选项
    enum class MenuOptions {
        StartGame = 1,
        ContinueGame,
        Settings,
        Exit
    };

    MenuOptions m_menuOptions; // 菜单选项
};

#endif // MENU_H
