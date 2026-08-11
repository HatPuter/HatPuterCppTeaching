#include "../include/Gamemain.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFontDatabase>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 设置字体
    int fontId = QFontDatabase::addApplicationFont("../resources/fonts/Primary.ttf");
    QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont globalFont(fontFamily);
    qreal dpr = a.primaryScreen()->devicePixelRatio(); // 获取DPI缩放因子
    globalFont.setPointSizeF(9.0 * dpr);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "HatPuterCppTeaching_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    GameMain w;
    w.show();
    return QApplication::exec();
}
