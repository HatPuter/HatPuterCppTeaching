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
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QGridLayout *gridLayout;
    QLabel *GameTitle;
    QLabel *SeparatorLine1;
    QLabel *SeparatorLine4;
    QListView *SeparatorLine4_2;
    QGridLayout *MenuOptions;
    QLabel *StartGame;
    QLabel *ContinueGame;
    QLabel *label_2;
    QLabel *Exit;
    QLabel *Settings;
    QLabel *label;
    QLabel *label_3;
    QLabel *SeparatorLine6;
    QLabel *SeparatorLine3;
    QLabel *SeparatorLine2;
    QLabel *SeparatorLine5;

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
        GameTitle = new QLabel(Menu);
        GameTitle->setObjectName(QString::fromUtf8("GameTitle"));
        GameTitle->setFont(font);
        GameTitle->setStyleSheet(QString::fromUtf8("QLabel#GameTitle {\n"
"    color: White;\n"
"    font-size: 64px;\n"
"}\n"
""));
        GameTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(GameTitle, 1, 2, 1, 1);

        SeparatorLine1 = new QLabel(Menu);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 2, 2, 1, 1);

        SeparatorLine4 = new QLabel(Menu);
        SeparatorLine4->setObjectName(QString::fromUtf8("SeparatorLine4"));
        SeparatorLine4->setMaximumSize(QSize(16777215, 16777215));
        SeparatorLine4->setFont(font);
        SeparatorLine4->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine4 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine4, 0, 0, 8, 1);

        SeparatorLine4_2 = new QListView(Menu);
        SeparatorLine4_2->setObjectName(QString::fromUtf8("SeparatorLine4_2"));

        gridLayout->addWidget(SeparatorLine4_2, 2, 4, 5, 1);

        MenuOptions = new QGridLayout();
        MenuOptions->setObjectName(QString::fromUtf8("MenuOptions"));
        StartGame = new QLabel(Menu);
        StartGame->setObjectName(QString::fromUtf8("StartGame"));
        StartGame->setMaximumSize(QSize(16777215, 16777215));
        StartGame->setFont(font);
        StartGame->setStyleSheet(QString::fromUtf8("QLabel#StartGame {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(StartGame, 0, 0, 1, 1);

        ContinueGame = new QLabel(Menu);
        ContinueGame->setObjectName(QString::fromUtf8("ContinueGame"));
        ContinueGame->setFont(font);
        ContinueGame->setStyleSheet(QString::fromUtf8("QLabel#ContinueGame {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(ContinueGame, 1, 0, 1, 1);

        label_2 = new QLabel(Menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        MenuOptions->addWidget(label_2, 0, 3, 1, 1);

        Exit = new QLabel(Menu);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setFont(font);
        Exit->setStyleSheet(QString::fromUtf8("QLabel#Exit {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(Exit, 3, 0, 1, 1);

        Settings = new QLabel(Menu);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setFont(font);
        Settings->setStyleSheet(QString::fromUtf8("QLabel#Settings {\n"
"    color: White;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(Settings, 2, 0, 1, 1);

        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));

        MenuOptions->addWidget(label, 1, 2, 1, 1);

        label_3 = new QLabel(Menu);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        MenuOptions->addWidget(label_3, 2, 1, 2, 1);


        gridLayout->addLayout(MenuOptions, 3, 2, 4, 1);

        SeparatorLine6 = new QLabel(Menu);
        SeparatorLine6->setObjectName(QString::fromUtf8("SeparatorLine6"));
        SeparatorLine6->setFont(font);
        SeparatorLine6->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine6 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine6, 1, 3, 6, 1);

        SeparatorLine3 = new QLabel(Menu);
        SeparatorLine3->setObjectName(QString::fromUtf8("SeparatorLine3"));
        SeparatorLine3->setFont(font);
        SeparatorLine3->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine3 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine3, 0, 2, 1, 3);

        SeparatorLine2 = new QLabel(Menu);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 7, 2, 1, 3);

        SeparatorLine5 = new QLabel(Menu);
        SeparatorLine5->setObjectName(QString::fromUtf8("SeparatorLine5"));
        SeparatorLine5->setFont(font);
        SeparatorLine5->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine5 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine5, 0, 5, 8, 1);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        GameTitle->setText(QCoreApplication::translate("Menu", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("Menu", "<html><head/><body><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font"
                        "-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p></body></html>", nullptr));
        SeparatorLine4->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        StartGame->setText(QCoreApplication::translate("Menu", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        ContinueGame->setText(QCoreApplication::translate("Menu", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        label_2->setText(QCoreApplication::translate("Menu", "TextLabel", nullptr));
        Exit->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272", nullptr));
        Settings->setText(QCoreApplication::translate("Menu", "\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("Menu", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Menu", "TextLabel", nullptr));
        SeparatorLine6->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine3->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine5->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
