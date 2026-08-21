#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QStyleOptionViewItem>
#include <QListView>

#include "Bulletins.h"

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

    void ShowOptions(); // 显示选项

signals:
    void Finished(); // 函数执行结束信号

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件
    bool eventFilter(QObject* object, QEvent* event) override; // 事件过滤器

private:
    Ui::Menu *ui;
    Bulletins *m_bulletins;

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
