/********************************************************************************
** Form generated from reading UI file 'ContentWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENTWINDOW_H
#define UI_CONTENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContentWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *SeparatorLine3;
    QLabel *SeparatorLine1;
    QWidget *ContentWidget;
    QGridLayout *gridLayout_3;
    QTextBrowser *Content;
    QLabel *SeparatorLine5;
    QLabel *SeparatorLine8;
    QLabel *Title;
    QLabel *SeparatorLine9;
    QLabel *Note;
    QLabel *SeparatorLine6;
    QLabel *SeparatorLine7;
    QLabel *SeparatorLine10;
    QLabel *SeparatorLine2;
    QLabel *SeparatorLine4;

    void setupUi(QWidget *ContentWindow)
    {
        if (ContentWindow->objectName().isEmpty())
            ContentWindow->setObjectName(QString::fromUtf8("ContentWindow"));
        ContentWindow->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        ContentWindow->setFont(font);
        ContentWindow->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ContentWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SeparatorLine3 = new QLabel(ContentWindow);
        SeparatorLine3->setObjectName(QString::fromUtf8("SeparatorLine3"));
        SeparatorLine3->setFont(font);
        SeparatorLine3->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine3 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine3, 4, 2, 1, 1);

        SeparatorLine1 = new QLabel(ContentWindow);
        SeparatorLine1->setObjectName(QString::fromUtf8("SeparatorLine1"));
        SeparatorLine1->setFont(font);
        SeparatorLine1->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine1 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine1, 0, 1, 5, 1);

        ContentWidget = new QWidget(ContentWindow);
        ContentWidget->setObjectName(QString::fromUtf8("ContentWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ContentWidget->sizePolicy().hasHeightForWidth());
        ContentWidget->setSizePolicy(sizePolicy);
        ContentWidget->setFont(font);
        ContentWidget->setStyleSheet(QString::fromUtf8("QWidget#ContentWidget {\n"
"	background-color: black;\n"
"    border-radius: 6px;\n"
"}\n"
""));
        gridLayout_3 = new QGridLayout(ContentWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Content = new QTextBrowser(ContentWidget);
        Content->setObjectName(QString::fromUtf8("Content"));
        Content->setFont(font);
        Content->setStyleSheet(QString::fromUtf8("QTextBrowser#Content {\n"
"    background-color: transparent; \n"
"    border-color: white;\n"
"    border-width: 2px;\n"
"    border-style: solid;\n"
"    border-radius: 6px;\n"
"    color: white;\n"
"    font-size: 24px;\n"
"}\n"
""));

        gridLayout_3->addWidget(Content, 3, 1, 1, 1);

        SeparatorLine5 = new QLabel(ContentWidget);
        SeparatorLine5->setObjectName(QString::fromUtf8("SeparatorLine5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SeparatorLine5->sizePolicy().hasHeightForWidth());
        SeparatorLine5->setSizePolicy(sizePolicy1);
        SeparatorLine5->setFont(font);
        SeparatorLine5->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine5 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout_3->addWidget(SeparatorLine5, 0, 0, 7, 1);

        SeparatorLine8 = new QLabel(ContentWidget);
        SeparatorLine8->setObjectName(QString::fromUtf8("SeparatorLine8"));
        SeparatorLine8->setFont(font);
        SeparatorLine8->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine8 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout_3->addWidget(SeparatorLine8, 6, 1, 1, 1);

        Title = new QLabel(ContentWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("QLabel#Title {\n"
"    font-size: 42px;\n"
"}\n"
""));
        Title->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Title, 1, 1, 1, 1);

        SeparatorLine9 = new QLabel(ContentWidget);
        SeparatorLine9->setObjectName(QString::fromUtf8("SeparatorLine9"));
        SeparatorLine9->setFont(font);
        SeparatorLine9->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine9 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout_3->addWidget(SeparatorLine9, 2, 1, 1, 1);

        Note = new QLabel(ContentWidget);
        Note->setObjectName(QString::fromUtf8("Note"));
        Note->setFont(font);
        Note->setStyleSheet(QString::fromUtf8("QLabel#Note {\n"
"    color: gray;\n"
"    font-size: 20px;\n"
"}\n"
""));
        Note->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(Note, 5, 1, 1, 1);

        SeparatorLine6 = new QLabel(ContentWidget);
        SeparatorLine6->setObjectName(QString::fromUtf8("SeparatorLine6"));
        sizePolicy1.setHeightForWidth(SeparatorLine6->sizePolicy().hasHeightForWidth());
        SeparatorLine6->setSizePolicy(sizePolicy1);
        SeparatorLine6->setFont(font);
        SeparatorLine6->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine6 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout_3->addWidget(SeparatorLine6, 0, 2, 7, 1);

        SeparatorLine7 = new QLabel(ContentWidget);
        SeparatorLine7->setObjectName(QString::fromUtf8("SeparatorLine7"));
        SeparatorLine7->setFont(font);
        SeparatorLine7->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine7 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout_3->addWidget(SeparatorLine7, 0, 1, 1, 1);

        SeparatorLine10 = new QLabel(ContentWidget);
        SeparatorLine10->setObjectName(QString::fromUtf8("SeparatorLine10"));
        SeparatorLine10->setFont(font);
        SeparatorLine10->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine10 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout_3->addWidget(SeparatorLine10, 4, 1, 1, 1);


        gridLayout->addWidget(ContentWidget, 3, 2, 1, 1);

        SeparatorLine2 = new QLabel(ContentWindow);
        SeparatorLine2->setObjectName(QString::fromUtf8("SeparatorLine2"));
        SeparatorLine2->setFont(font);
        SeparatorLine2->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine2 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine2, 0, 3, 5, 1);

        SeparatorLine4 = new QLabel(ContentWindow);
        SeparatorLine4->setObjectName(QString::fromUtf8("SeparatorLine4"));
        SeparatorLine4->setFont(font);
        SeparatorLine4->setStyleSheet(QString::fromUtf8("QLabel#SeparatorLine4 {\n"
"    color: transparent;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"    font-size: 9px;\n"
"}\n"
""));

        gridLayout->addWidget(SeparatorLine4, 0, 2, 1, 1);


        retranslateUi(ContentWindow);

        QMetaObject::connectSlotsByName(ContentWindow);
    } // setupUi

    void retranslateUi(QWidget *ContentWindow)
    {
        ContentWindow->setWindowTitle(QCoreApplication::translate("ContentWindow", "Form", nullptr));
        SeparatorLine3->setText(QCoreApplication::translate("ContentWindow", "<html><head/><body><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p></body></html>", nullptr));
        SeparatorLine1->setText(QCoreApplication::translate("ContentWindow", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine5->setText(QCoreApplication::translate("ContentWindow", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine8->setText(QCoreApplication::translate("ContentWindow", "<html><head/><body><p>\345\210\206\345\211\262\347\272\277</p><p>\345\210\206\345\211\262\347\272\277</p></body></html>", nullptr));
        Title->setText(QCoreApplication::translate("ContentWindow", "\346\240\207\351\242\230", nullptr));
        SeparatorLine9->setText(QCoreApplication::translate("ContentWindow", "\345\210\206\345\211\262\347\272\277", nullptr));
        Note->setText(QCoreApplication::translate("ContentWindow", "\346\214\211\344\270\213\347\251\272\346\240\274\351\224\256\351\200\200\345\207\272", nullptr));
        SeparatorLine6->setText(QCoreApplication::translate("ContentWindow", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine7->setText(QCoreApplication::translate("ContentWindow", "<html><head/><body><p>\345\210\206\345\211\262\347\272\277</p><p>\345\210\206\345\211\262\347\272\277</p></body></html>", nullptr));
        SeparatorLine10->setText(QCoreApplication::translate("ContentWindow", "\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine2->setText(QCoreApplication::translate("ContentWindow", "\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277\345\210\206\345\211\262\347\272\277", nullptr));
        SeparatorLine4->setText(QCoreApplication::translate("ContentWindow", "<html><head/><body><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p><p><span style=\" font-size:7pt;\">\345\210\206\345\211\262\347\272\277</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContentWindow: public Ui_ContentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTWINDOW_H
