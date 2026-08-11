#include "../include/Attention.h"
#include "../include/Animation.h"
#include "../include/GameMain.h"
#include "ui_Attention.h"

#include <QKeyEvent>

Attention::Attention(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Attention)
    , m_ifFadeOut(false)
{
    ui->setupUi(this);

    Animation::RunAnimation(this, {
        Animation::FadeInOrOut(this, 0.0, 1.0, 500)
    }, false, [this]() {
        emit Attention::Finished(); // 发送函数执行结束信号(但前面条件是false)
    });
}

Attention::~Attention()
{
    delete ui;
}

// 渐隐
void Attention::FadeOut()
{
    m_ifFadeOut = true;

    Animation::RunAnimation(this, {
        Animation::FadeInOrOut(this, 1.0, 0.0, 500),
        Animation::Pause(this, 1000)
    }, true, [this]() {
        emit Attention::Finished(); // 发送函数执行结束信号
    });
}

// 键盘事件
void Attention::keyPressEvent(QKeyEvent *event)
{
    // 按下空格键继续
    if (event->key() == Qt::Key_Space and m_ifFadeOut == false) {
        Attention::FadeOut();
    }
}
