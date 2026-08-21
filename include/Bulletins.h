#ifndef BULLETINS_H
#define BULLETINS_H

#include <QListView>

class Bulletins : public QWidget
{
    Q_OBJECT

public:
    explicit Bulletins(QWidget *parent = nullptr);
    ~Bulletins() override;

    void ShowBulletins(QListView *bulletinsBoard); // 显示公告

private:
    QListView *m_bulletinsBoard; // 公告栏

    bool m_ifSetBulletins; // 是否获取公告
};

#endif // BULLETINS_H
