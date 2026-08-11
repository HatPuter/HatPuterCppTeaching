/********************************************************************************
** Form generated from reading UI file 'GameMain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMAIN_H
#define UI_GAMEMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMain
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *GameMain)
    {
        if (GameMain->objectName().isEmpty())
            GameMain->setObjectName(QString::fromUtf8("GameMain"));
        GameMain->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        GameMain->setFont(font);
        GameMain->setStyleSheet(QString::fromUtf8("QWidget#GameMain {\n"
"    background-color: Black;\n"
"}\n"
""));
        gridLayout = new QGridLayout(GameMain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        retranslateUi(GameMain);

        QMetaObject::connectSlotsByName(GameMain);
    } // setupUi

    void retranslateUi(QWidget *GameMain)
    {
        GameMain->setWindowTitle(QCoreApplication::translate("GameMain", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameMain: public Ui_GameMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMAIN_H
