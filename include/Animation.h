#ifndef ANIMATION_H
#define ANIMATION_H

#include <QWidget>
#include <QAbstractAnimation>
#include <QPropertyAnimation>
#include <QPauseAnimation>

class Animation
{
public:
    static QPropertyAnimation *FadeInOrOut(QWidget *parent, float startOpacity, float endOpacity, int duration); // 渐显/隐(控件，开始透明度，结束透明度，持续时间)
    static QPauseAnimation *Pause(QWidget *parent, int time); // 等待多少毫秒
    static void RunAnimation(QWidget *parent, std::initializer_list<QAbstractAnimation*> animations, bool ifFinished, std::function<void()> onFinished); // 执行动画
};

#endif // ANIMATION_H
