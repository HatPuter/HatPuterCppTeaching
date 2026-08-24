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
    QLabel *Title;
    QLabel *SeparatorLine2;
    QLabel *Note;
    QLabel *SeparatorLine1;
    QLabel *Content;

    void setupUi(QWidget *Attention)
    {
        if (Attention->objectName().isEmpty())
            Attention->setObjectName(QString::fromUtf8("Attention"));
        Attention->resize(1344, 756);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        Attention->setFont(font);
        Attention->setStyleSheet(QString::fromUtf8("QWidget#Attention {\n"
"    background-color: Black;\n"
"}\n"
""));
        gridLayout = new QGridLayout(Attention);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Title = new QLabel(Attention);
        Title->setObjectName(QString::fromUtf8("Title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Title->sizePolicy().hasHeightForWidth());
        Title->setSizePolicy(sizePolicy);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("QLabel#Title {\n"
"    color: red;\n"
"    font-size: 58px;\n"
"}\n"
""));
        Title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Title, 1, 1, 1, 1);

        SeparatorLine2 = new QLabel(Attention);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 0, 2, 5, 1);

        Note = new QLabel(Attention);
        Note->setObjectName(QString::fromUtf8("Note"));
        sizePolicy.setHeightForWidth(Note->sizePolicy().hasHeightForWidth());
        Note->setSizePolicy(sizePolicy);
        Note->setFont(font);
        Note->setStyleSheet(QString::fromUtf8("QLabel#Note {\n"
"    color: gray;\n"
"    font-size: 24px;\n"
"}\n"
""));
        Note->setAlignment(Qt::AlignCenter);
        Note->setWordWrap(false);
        Note->setMargin(0);

        gridLayout->addWidget(Note, 3, 1, 1, 1);

        SeparatorLine1 = new QLabel(Attention);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 0, 0, 5, 1);

        Content = new QLabel(Attention);
        Content->setObjectName(QString::fromUtf8("Content"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Content->sizePolicy().hasHeightForWidth());
        Content->setSizePolicy(sizePolicy1);
        Content->setFont(font);
        Content->setStyleSheet(QString::fromUtf8("QLabel#Content {\n"
"    color: white;\n"
"    font-size: 26px;\n"
"}\n"
""));
        Content->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(Content, 2, 1, 1, 1);


        retranslateUi(Attention);

        QMetaObject::connectSlotsByName(Attention);
    } // setupUi

    void retranslateUi(QWidget *Attention)
    {
        Attention->setWindowTitle(QCoreApplication::translate("Attention", "HatPuter\347\232\204C++\346\225\231\345\255\246", nullptr));
        Title->setText(QCoreApplication::translate("Attention", "\346\270\270\346\210\217\345\211\215\350\257\267\351\230\205\350\257\273", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("Attention", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        Note->setText(QCoreApplication::translate("Attention", "\346\214\211\344\270\213\347\251\272\346\240\274\351\224\256\347\273\247\347\273\255", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("Attention", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        Content->setText(QCoreApplication::translate("Attention", "\344\270\200\343\200\201\345\205\203\347\264\240\357\274\232\n"
"\342\200\216\342\200\216\343\205\244\343\205\244\302\267\346\234\254\346\270\270\346\210\217\345\214\205\345\220\253furry\345\205\203\347\264\240\357\274\214\350\213\245\346\234\211\345\257\271\346\255\244\345\205\203\347\264\240\345\217\215\346\204\237\347\232\204\347\224\250\346\210\267\357\274\214\350\257\267\350\260\250\346\205\216\346\270\270\347\216\251\n"
"\n"
"\344\272\214\343\200\201\345\274\200\346\272\220\346\263\225\345\210\231\357\274\232\n"
"\343\205\244\343\205\244\302\267\346\234\254\346\270\270\346\210\217\344\275\277\347\224\250\345\274\200\346\272\220\347\211\210Qt5.15.2\345\274\200\345\217\221\357\274\214\346\270\270\346\210\217\345\256\214\345\205\250\345\274\200\346\272\220\344\270\224\345\205\215\350\264\271\357\274\214\345\205\201\350\256\270\344\272\214\345\210\233\357\274\214\344\275\206\350\246\201\351\201\265\345\256\210\345\274\200\n"
"\346\272\220\346\263\225\345\210\231\n"
"\n"
"\344\270\211\343\200\201\350\272\253\344"
                        "\275\223\350\255\246\345\221\212\357\274\232\n"
"\343\205\244\343\205\244\302\267\346\234\254\346\270\270\346\210\217\345\220\253\346\234\211\345\205\211\346\225\217\346\204\237\344\277\241\346\201\257\357\274\214\345\257\271\346\255\244\344\277\241\346\201\257\345\217\257\350\203\275\344\274\232\344\272\247\347\224\237\347\224\237\347\220\206\351\227\256\351\242\230\347\232\204\344\272\272\350\260\250\346\205\216\346\270\270\347\216\251\357\274\214\345\246\202\346\236\234\345\233\240\346\255\244\n"
"\344\272\247\347\224\237\347\224\237\347\220\206\351\227\256\351\242\230\357\274\214\346\234\254\346\270\270\346\210\217\346\246\202\344\270\215\350\264\237\350\264\243\n"
"\343\205\244\343\205\244\302\267\350\257\267\345\220\210\347\220\206\345\256\211\346\216\222\346\270\270\347\216\251\346\227\266\351\227\264\357\274\214\344\270\215\350\246\201\351\230\262\346\262\211\350\277\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Attention: public Ui_Attention {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENTION_H
