/********************************************************************************
** Form generated from reading UI file 'Menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QGridLayout *gridLayout;
    QLabel *Exit;
    QLabel *SeparatorLine1;
    QLabel *GameTitle;
    QLabel *StartGame;
    QLabel *Settings;
    QLabel *SeparatorLine3;
    QLabel *SeparatorLine2;
    QLabel *ContinueGame;
    QLabel *SeparatorLine4;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        Menu->setFont(font);
        Menu->setLayoutDirection(Qt::LeftToRight);
        Menu->setStyleSheet(QString::fromUtf8("QWidget#Menu {\n"
"    background-color: Black;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Exit = new QLabel(Menu);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setFont(font);
        Exit->setStyleSheet(QString::fromUtf8("QLabel#Exit {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        gridLayout->addWidget(Exit, 7, 1, 1, 1);

        SeparatorLine1 = new QLabel(Menu);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 2, 1, 1, 1);

        GameTitle = new QLabel(Menu);
        GameTitle->setObjectName(QString::fromUtf8("GameTitle"));
        GameTitle->setFont(font);
        GameTitle->setStyleSheet(QString::fromUtf8("QLabel#GameTitle {\n"
"    color: White;\n"
"    font-size: 64px;\n"
"}\n"
""));
        GameTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(GameTitle, 1, 1, 1, 1);

        StartGame = new QLabel(Menu);
        StartGame->setObjectName(QString::fromUtf8("StartGame"));
        StartGame->setMaximumSize(QSize(16777215, 16777215));
        StartGame->setFont(font);
        StartGame->setStyleSheet(QString::fromUtf8("QLabel#StartGame {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        gridLayout->addWidget(StartGame, 3, 1, 1, 1);

        Settings = new QLabel(Menu);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setFont(font);
        Settings->setStyleSheet(QString::fromUtf8("QLabel#Settings {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        gridLayout->addWidget(Settings, 5, 1, 1, 1);

        SeparatorLine3 = new QLabel(Menu);
        SeparatorLine3->setObjectName(QString::fromUtf8("SeparatorLine3"));
        SeparatorLine3->setFont(font);
        SeparatorLine3->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine3 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine3, 0, 1, 1, 1);

        SeparatorLine2 = new QLabel(Menu);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 8, 1, 1, 1);

        ContinueGame = new QLabel(Menu);
        ContinueGame->setObjectName(QString::fromUtf8("ContinueGame"));
        ContinueGame->setFont(font);
        ContinueGame->setStyleSheet(QString::fromUtf8("QLabel#ContinueGame {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        gridLayout->addWidget(ContinueGame, 4, 1, 1, 1);

        SeparatorLine4 = new QLabel(Menu);
        SeparatorLine4->setObjectName(QString::fromUtf8("SeparatorLine4"));
        SeparatorLine4->setMaximumSize(QSize(50, 16777215));
        SeparatorLine4->setFont(font);
        SeparatorLine4->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine4 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine4, 2, 0, 1, 1);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        Exit->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("Menu", "<html><head/><body><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p></body></html>", nullptr));
        GameTitle->setText(QCoreApplication::translate("Menu", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        StartGame->setText(QCoreApplication::translate("Menu", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        Settings->setText(QCoreApplication::translate("Menu", "\350\256\276\347\275\256", nullptr));
        SeparatorLine3->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        ContinueGame->setText(QCoreApplication::translate("Menu", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        SeparatorLine4->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
