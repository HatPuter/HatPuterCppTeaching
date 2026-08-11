#include "../include/Animation.h"

#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QPauseAnimation>

// 渐显/隐
QPropertyAnimation *Animation::FadeInOrOut(QWidget *parent, float startOpacity, float endOpacity, int duration)
{
    // 透明度设置
    QGraphicsOpacityEffect *opacityEffect = qobject_cast<QGraphicsOpacityEffect *>(parent->graphicsEffect());
    if (opacityEffect == nullptr) {
        opacityEffect = new QGraphicsOpacityEffect(parent);
        parent->setGraphicsEffect(opacityEffect);
    }
    opacityEffect->setOpacity(startOpacity);

    // 动画
    QPropertyAnimation *fadeInOrOut = new QPropertyAnimation(opacityEffect, "opacity");
    fadeInOrOut->setStartValue(startOpacity);
    fadeInOrOut->setEndValue(endOpacity);
    fadeInOrOut->setEasingCurve(QEasingCurve::InOutSine);
    fadeInOrOut->setDuration(duration);

    return fadeInOrOut;
}

// 等待多少毫秒
QPauseAnimation *Animation::Pause(QWidget *parent, int time)
{
    return new QPauseAnimation(time, parent);
}

// 执行动画
void Animation::RunAnimation(QWidget *parent, std::initializer_list<QAbstractAnimation*> animations, bool ifFinished, std::function<void()> Finished)
{
    QSequentialAnimationGroup *runAnimation = new QSequentialAnimationGroup(parent);

    for (auto *animation : animations) {
        runAnimation->addAnimation(animation);
    }

    QObject::connect(runAnimation, &QSequentialAnimationGroup::finished, [=]() {
        if (ifFinished == true) {
            Finished();
        }
        runAnimation->deleteLater();
    });

    runAnimation->start();
}
