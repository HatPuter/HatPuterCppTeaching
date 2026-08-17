#ifndef CONTENTWINDOW_H
#define CONTENTWINDOW_H

#include <QWidget>
#include <QString>

class QKeyEvent;

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
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件
    void resizeEvent(QResizeEvent *event) override; // 调整大小事件

private:
    Ui::ContentWindow *ui;
};

#endif // CONTENTWINDOW_H
