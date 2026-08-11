/********************************************************************************
** Form generated from reading UI file 'UserData.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATA_H
#define UI_USERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserData
{
public:

    void setupUi(QWidget *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName(QString::fromUtf8("UserData"));
        UserData->resize(1280, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Maple Mono NL CN"));
        UserData->setFont(font);

        retranslateUi(UserData);

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QWidget *UserData)
    {
        UserData->setWindowTitle(QCoreApplication::translate("UserData", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H
