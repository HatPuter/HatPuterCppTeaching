#ifndef GAMEMAIN_H
#define GAMEMAIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class GameMain;
}
QT_END_NAMESPACE

class GameMain : public QWidget
{
    Q_OBJECT

public:
    explicit GameMain(QWidget *parent = nullptr);
    ~GameMain() override;

    void SetFont(); // 设置字体
    void SwitchToUI(QWidget *ui); // 切换UI

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件
    void resizeEvent(QResizeEvent *event) override; // 调整大小事件

private:
    Ui::GameMain *ui;
    
    QWidget *m_currentUI; // UI
};
#endif // GAMEMAIN_H
