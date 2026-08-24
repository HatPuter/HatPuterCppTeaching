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
    QLabel *SeparatorLine2;
    QLabel *SeparatorLine5;
    QLabel *SeparatorLine1;
    QGridLayout *MenuOptions;
    QLabel *StartGame;
    QLabel *ContinueGame;
    QLabel *SeparatorLine7;
    QLabel *Exit;
    QLabel *Settings;
    QLabel *SeparatorLine8;
    QLabel *SeparatorLine9;
    QLabel *SeparatorLine6;
    QLabel *SeparatorLine4;
    QLabel *SeparatorLine3;
    QLabel *GameTitle;
    QListView *BulletinsBoard;
    QLabel *BulletinsBoardTitle;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1344, 756);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        Menu->setFont(font);
        Menu->setLayoutDirection(Qt::LeftToRight);
        Menu->setStyleSheet(QString::fromUtf8("QWidget#Menu {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(7, 255, 0, 255), stop:1 rgba(0, 102, 255, 255));\n"
"}\n"
""));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SeparatorLine2 = new QLabel(Menu);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 8, 2, 1, 3);

        SeparatorLine5 = new QLabel(Menu);
        SeparatorLine5->setObjectName(QString::fromUtf8("SeparatorLine5"));
        SeparatorLine5->setFont(font);
        SeparatorLine5->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine5 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine5, 0, 6, 9, 1);

        SeparatorLine1 = new QLabel(Menu);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"    color: transparent;\n"
"	background-color: transparent;\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 3, 2, 1, 1);

        MenuOptions = new QGridLayout();
        MenuOptions->setObjectName(QString::fromUtf8("MenuOptions"));
        StartGame = new QLabel(Menu);
        StartGame->setObjectName(QString::fromUtf8("StartGame"));
        StartGame->setMaximumSize(QSize(16777215, 16777215));
        StartGame->setFont(font);
        StartGame->setStyleSheet(QString::fromUtf8("QLabel#StartGame {\n"
"    color: white;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(StartGame, 0, 0, 1, 1);

        ContinueGame = new QLabel(Menu);
        ContinueGame->setObjectName(QString::fromUtf8("ContinueGame"));
        ContinueGame->setFont(font);
        ContinueGame->setStyleSheet(QString::fromUtf8("QLabel#ContinueGame {\n"
"    color: white;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(ContinueGame, 1, 0, 1, 1);

        SeparatorLine7 = new QLabel(Menu);
        SeparatorLine7->setObjectName(QString::fromUtf8("SeparatorLine7"));
        SeparatorLine7->setFont(font);
        SeparatorLine7->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine7 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        MenuOptions->addWidget(SeparatorLine7, 0, 3, 1, 1);

        Exit = new QLabel(Menu);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Exit->sizePolicy().hasHeightForWidth());
        Exit->setSizePolicy(sizePolicy);
        Exit->setFont(font);
        Exit->setStyleSheet(QString::fromUtf8("QLabel#Exit {\n"
"    color: white;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(Exit, 3, 0, 1, 1);

        Settings = new QLabel(Menu);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);
        Settings->setFont(font);
        Settings->setStyleSheet(QString::fromUtf8("QLabel#Settings {\n"
"    color: white;\n"
"    font-size: 32px;\n"
"}\n"
""));

        MenuOptions->addWidget(Settings, 2, 0, 1, 1);

        SeparatorLine8 = new QLabel(Menu);
        SeparatorLine8->setObjectName(QString::fromUtf8("SeparatorLine8"));
        SeparatorLine8->setFont(font);
        SeparatorLine8->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine8 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        MenuOptions->addWidget(SeparatorLine8, 1, 2, 1, 1);

        SeparatorLine9 = new QLabel(Menu);
        SeparatorLine9->setObjectName(QString::fromUtf8("SeparatorLine9"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SeparatorLine9->sizePolicy().hasHeightForWidth());
        SeparatorLine9->setSizePolicy(sizePolicy1);
        SeparatorLine9->setFont(font);
        SeparatorLine9->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine9 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        MenuOptions->addWidget(SeparatorLine9, 2, 1, 2, 1);


        gridLayout->addLayout(MenuOptions, 4, 2, 4, 1);

        SeparatorLine6 = new QLabel(Menu);
        SeparatorLine6->setObjectName(QString::fromUtf8("SeparatorLine6"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SeparatorLine6->sizePolicy().hasHeightForWidth());
        SeparatorLine6->setSizePolicy(sizePolicy2);
        SeparatorLine6->setFont(font);
        SeparatorLine6->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine6 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine6, 1, 3, 7, 1);

        SeparatorLine4 = new QLabel(Menu);
        SeparatorLine4->setObjectName(QString::fromUtf8("SeparatorLine4"));
        SeparatorLine4->setMaximumSize(QSize(16777215, 16777215));
        SeparatorLine4->setFont(font);
        SeparatorLine4->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine4 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine4, 0, 0, 9, 1);

        SeparatorLine3 = new QLabel(Menu);
        SeparatorLine3->setObjectName(QString::fromUtf8("SeparatorLine3"));
        SeparatorLine3->setFont(font);
        SeparatorLine3->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine3 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine3, 0, 2, 1, 3);

        GameTitle = new QLabel(Menu);
        GameTitle->setObjectName(QString::fromUtf8("GameTitle"));
        GameTitle->setFont(font);
        GameTitle->setStyleSheet(QString::fromUtf8("QLabel#GameTitle {\n"
"    color: white;\n"
"    font-size: 64px;\n"
"}\n"
""));
        GameTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(GameTitle, 1, 2, 1, 1);

        BulletinsBoard = new QListView(Menu);
        BulletinsBoard->setObjectName(QString::fromUtf8("BulletinsBoard"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BulletinsBoard->sizePolicy().hasHeightForWidth());
        BulletinsBoard->setSizePolicy(sizePolicy3);
        BulletinsBoard->setMinimumSize(QSize(0, 0));
        BulletinsBoard->setMaximumSize(QSize(16777215, 16777215));
        BulletinsBoard->setFont(font);
        BulletinsBoard->setStyleSheet(QString::fromUtf8("QListView#BulletinsBoard {\n"
"    background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 22px;\n"
"    color: white;\n"
"    border-color: white;\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-radius: 6px;\n"
"}\n"
"QListView#BulletinsBoard::item {\n"
"    height: 42px;\n"
"}\n"
"QListView#BulletinsBoard::item:hover {\n"
"    background-color: rgba(152, 251, 152, 64);\n"
"    color: white;\n"
"}\n"
"QListView#BulletinsBoard::item:selected {\n"
"    background-color: rgba(152, 251, 152, 100);\n"
"    color: white;\n"
"}\n"
""));
        BulletinsBoard->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout->addWidget(BulletinsBoard, 3, 4, 5, 1);

        BulletinsBoardTitle = new QLabel(Menu);
        BulletinsBoardTitle->setObjectName(QString::fromUtf8("BulletinsBoardTitle"));
        BulletinsBoardTitle->setFont(font);
        BulletinsBoardTitle->setStyleSheet(QString::fromUtf8("QLabel#BulletinsBoardTitle {\n"
"    color: white;\n"
"    font-size: 28px;\n"
"}\n"
""));
        BulletinsBoardTitle->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(BulletinsBoardTitle, 2, 4, 1, 1);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine5->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("Menu", "<html><head/><body><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font"
                        "-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p></body></html>", nullptr));
        StartGame->setText(QCoreApplication::translate("Menu", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        ContinueGame->setText(QCoreApplication::translate("Menu", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        SeparatorLine7->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        Exit->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272", nullptr));
        Settings->setText(QCoreApplication::translate("Menu", "\350\256\276\347\275\256", nullptr));
        SeparatorLine8->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine9->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine6->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine4->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine3->setText(QCoreApplication::translate("Menu", "\345\210\206\345\211\262\347\272\277", nullptr));
        GameTitle->setText(QCoreApplication::translate("Menu", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        BulletinsBoardTitle->setText(QCoreApplication::translate("Menu", "\350\277\221\346\234\237\345\205\254\345\221\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
