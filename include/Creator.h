#ifndef CREATOR_H
#define CREATOR_H

#include <QWidget>

namespace Ui {
class Creator;
}

class Creator : public QWidget
{
    Q_OBJECT

public:
    explicit Creator(QWidget *parent = nullptr);
    ~Creator();

signals:
    void Finished(); // 函数执行结束信号

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件

private:
    Ui::Creator *ui;
};

#endif // CREATOR_H
