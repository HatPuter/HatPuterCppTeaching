#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QStyleOptionViewItem>
#include <QListView>

class ContentWindow;

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
    void ShowBulletins(QListView *BulletinsBoard); // 显示公告
    void PaintBulletins(QPainter* painter, const QStyleOptionViewItem& styleOption, const QModelIndex& modelIndex); // 绘制公告

signals:
    void Finished(); // 函数执行结束信号

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件
    bool eventFilter(QObject* object, QEvent* event) override; // 事件过滤器

private slots:
    void on_BulletinsBoard_doubleClicked(const QModelIndex &index);

private:
    Ui::Menu *ui;
    ContentWindow *m_contentWindow; // 公告内容窗

    // 菜单选项
    enum class MenuOptions {
        StartGame = 1,
        ContinueGame,
        Settings,
        Exit
    };
    MenuOptions m_menuOptions; // 菜单选项

    bool m_ifSetBulletins; // 是否获取公告
};

#endif // MENU_H
