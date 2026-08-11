/********************************************************************************
** Form generated from reading UI file 'Attention.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENTION_H
#define UI_ATTENTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Attention
{
public:
    QGridLayout *gridLayout;
    QLabel *SeparatorLine1;
    QLabel *Content;
    QLabel *SeparatorLine2;
    QLabel *Title;
    QLabel *Note;

    void setupUi(QWidget *Attention)
    {
        if (Attention->objectName().isEmpty())
            Attention->setObjectName(QString::fromUtf8("Attention"));
        Attention->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        Attention->setFont(font);
        Attention->setStyleSheet(QString::fromUtf8("QWidget#Attention {\n"
"    background-color: Black;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Attention);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SeparatorLine1 = new QLabel(Attention);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 1, 0, 1, 1);

        Content = new QLabel(Attention);
        Content->setObjectName(QString::fromUtf8("Content"));
        Content->setFont(font);
        Content->setStyleSheet(QString::fromUtf8("QLabel#Content {\n"
"    color: White;\n"
"    font-size: 30px;\n"
"}\n"
""));
        Content->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(Content, 1, 1, 1, 1);

        SeparatorLine2 = new QLabel(Attention);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 1, 2, 1, 1);

        Title = new QLabel(Attention);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("QLabel#Title {\n"
"    color: Red;\n"
"    font-size: 64px;\n"
"}\n"
""));
        Title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Title, 0, 0, 1, 3);

        Note = new QLabel(Attention);
        Note->setObjectName(QString::fromUtf8("Note"));
        Note->setFont(font);
        Note->setStyleSheet(QString::fromUtf8("QLabel#Note {\n"
"    color: White;\n"
"    font-size: 28px;\n"
"}\n"
""));
        Note->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Note, 2, 0, 1, 3);


        retranslateUi(Attention);

        QMetaObject::connectSlotsByName(Attention);
    } // setupUi

    void retranslateUi(QWidget *Attention)
    {
        Attention->setWindowTitle(QCoreApplication::translate("Attention", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("Attention", "\345\210\206\345\211\262\347\272\277", nullptr));
        Content->setText(QCoreApplication::translate("Attention", "<html><head/><body><p><span style=\" font-size:23pt;\">1\343\200\201\346\234\254\346\270\270\346\210\217\345\214\205\345\220\253[\347\246\217\347\221\236]\345\205\203\347\264\240\357\274\214 \345\257\271\347\246\217\347\221\236\345\205\203\347\264\240\345\217\215\346\204\237\347\232\204\344\272\272\346\205\216\347\216\251</span></p><p><span style=\" font-size:23pt;\">2\343\200\201\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246\342\200\246</span></p></body></html>", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("Attention", "\345\210\206\345\211\262\347\272\277", nullptr));
        Title->setText(QCoreApplication::translate("Attention", "\346\270\270\346\210\217\345\211\215\350\257\267\351\230\205\350\257\273", nullptr));
        Note->setText(QCoreApplication::translate("Attention", "\346\214\211\344\270\213\347\251\272\346\240\274\351\224\256\347\273\247\347\273\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attention: public Ui_Attention {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENTION_H
