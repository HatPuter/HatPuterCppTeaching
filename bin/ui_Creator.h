/********************************************************************************
** Form generated from reading UI file 'Creator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATOR_H
#define UI_CREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Creator
{
public:
    QGridLayout *gridLayout;
    QLabel *SeparatorLine3;
    QLabel *SeparatorLine1;
    QLabel *CreatorAvatar;
    QLabel *SeparatorLine2;
    QLabel *CreatorName;

    void setupUi(QWidget *Creator)
    {
        if (Creator->objectName().isEmpty())
            Creator->setObjectName(QString::fromUtf8("Creator"));
        Creator->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Creator->sizePolicy().hasHeightForWidth());
        Creator->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        Creator->setFont(font);
        Creator->setStyleSheet(QString::fromUtf8("QWidget#Creator {\n"
"    background-color: Black;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Creator);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SeparatorLine3 = new QLabel(Creator);
        SeparatorLine3->setObjectName(QString::fromUtf8("SeparatorLine3"));
        SeparatorLine3->setFont(font);
        SeparatorLine3->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine3 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine3, 0, 0, 1, 1);

        SeparatorLine1 = new QLabel(Creator);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 0, 3, 1, 1);

        CreatorAvatar = new QLabel(Creator);
        CreatorAvatar->setObjectName(QString::fromUtf8("CreatorAvatar"));
        sizePolicy.setHeightForWidth(CreatorAvatar->sizePolicy().hasHeightForWidth());
        CreatorAvatar->setSizePolicy(sizePolicy);
        CreatorAvatar->setFont(font);
        CreatorAvatar->setStyleSheet(QString::fromUtf8("QLabel#CreatorAvatar {\n"
"    color: white;\n"
"    font-size: 50px;\n"
"}\n"
""));
        CreatorAvatar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(CreatorAvatar, 0, 1, 1, 1);

        SeparatorLine2 = new QLabel(Creator);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 0, 5, 1, 1);

        CreatorName = new QLabel(Creator);
        CreatorName->setObjectName(QString::fromUtf8("CreatorName"));
        sizePolicy.setHeightForWidth(CreatorName->sizePolicy().hasHeightForWidth());
        CreatorName->setSizePolicy(sizePolicy);
        CreatorName->setFont(font);
        CreatorName->setStyleSheet(QString::fromUtf8("QLabel#CreatorName {\n"
"    color: white;\n"
"    font-size: 50px;\n"
"}\n"
""));
        CreatorName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(CreatorName, 0, 4, 1, 1);


        retranslateUi(Creator);

        QMetaObject::connectSlotsByName(Creator);
    } // setupUi

    void retranslateUi(QWidget *Creator)
    {
        Creator->setWindowTitle(QCoreApplication::translate("Creator", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        SeparatorLine3->setText(QCoreApplication::translate("Creator", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("Creator", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        CreatorAvatar->setText(QCoreApplication::translate("Creator", "\345\244\264\345\203\217", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("Creator", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        CreatorName->setText(QCoreApplication::translate("Creator", "Bilibili HatPuter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creator: public Ui_Creator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATOR_H
