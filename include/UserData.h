#ifndef USERDATA_H
#define USERDATA_H

#include <QWidget>

namespace Ui {
class UserData;
}

class UserData : public QWidget
{
    Q_OBJECT

public:
    explicit UserData(QWidget *parent = nullptr);
    ~UserData();

private:
    Ui::UserData *ui;
};

#endif // USERDATA_H
