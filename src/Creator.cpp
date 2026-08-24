#include "../include/Creator.h"
#include "../include/Animation.h"
#include "../include/Attention.h"
#include "../include/GameMain.h"
#include "ui_Creator.h"

#include <QPixmap>
#include <QGraphicsEffect>

Creator::Creator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Creator)
{
    ui->setupUi(this);

    // 制作者头像缩放
    QPixmap creatorAvatar("../resources/CreatorAvatar.png");
    ui->CreatorAvatar->setPixmap(creatorAvatar.scaled(creatorAvatar.size() * 0.25, Qt::KeepAspectRatio, Qt::SmoothTransformation));

    // 渐显渐隐
    Animation::RunAnimation(this, {
        Animation::FadeInOrOut(this, 0.0, 1.0, 500),
        Animation::Pause(this, 1000),
        Animation::FadeInOrOut(this, 1.0, 0.0, 500),
        Animation::Pause(this, 1000)
    }, true, [this]() {
        emit Creator::Finished(); // 发送函数执行结束信号
    });
}

Creator::~Creator()
{
    delete ui;
}

// 键盘事件
void Creator::keyPressEvent(QKeyEvent *event)
{
    // nullptr;
}
