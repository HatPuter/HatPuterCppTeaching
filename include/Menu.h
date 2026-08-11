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

signals:
    void Finished(); // 函数执行结束信号

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件
    bool eventFilter(QObject* object, QEvent* event) override; // 事件过滤器(菜单选项触碰)

private:
    Ui::Menu *ui;

    int menuOptions; // 菜单选项
};

#endif // MENU_H
