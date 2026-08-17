#ifndef CONTENTWINDOW_H
#define CONTENTWINDOW_H

#include <QWidget>
#include <QString>

class QKeyEvent;
class QEvent;

namespace Ui {
class ContentWindow;
}

class ContentWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ContentWindow(QWidget *parent = nullptr);
    ~ContentWindow();

    void ShowContentWindow(QString title, QString content, QString category); // 显示内容窗

protected:
    bool eventFilter(QObject *obj, QEvent *event) override; // 事件过滤器（无需焦点即可捕获按键）

private:
    Ui::ContentWindow *ui;
};

#endif // CONTENTWINDOW_H
