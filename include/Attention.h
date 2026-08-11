#ifndef ATTENTION_H
#define ATTENTION_H

#include <QWidget>

namespace Ui {
class Attention;
}

class Attention : public QWidget
{
    Q_OBJECT

public:
    explicit Attention(QWidget *parent = nullptr);
    ~Attention();
    
    void FadeOut(); // 渐隐

signals:
    void Finished(); // 函数执行结束信号

protected:
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件

private:
    Ui::Attention *ui;

    bool m_ifFadeOut;
};

#endif // ATTENTION_H
