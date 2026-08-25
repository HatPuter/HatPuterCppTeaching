#include "../include/GameMain.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFontDatabase>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 设置字体
    int fontId = QFontDatabase::addApplicationFont("resources/fonts/Primary.ttf");
    QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont globalFont(fontFamily);
    qreal dpr = a.primaryScreen()->devicePixelRatio(); // 获取DPI缩放因子
    globalFont.setPointSizeF(9.0 * dpr);

    GameMain w;
    w.show();
    return QApplication::exec();
}
