/********************************************************************************
** Form generated from reading UI file 'myimageprovider.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYIMAGEPROVIDER_H
#define UI_MYIMAGEPROVIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MyImageProvider
{
public:

    void setupUi(QDialog *MyImageProvider)
    {
        if (MyImageProvider->objectName().isEmpty())
            MyImageProvider->setObjectName(QStringLiteral("MyImageProvider"));
        MyImageProvider->resize(400, 300);

        retranslateUi(MyImageProvider);

        QMetaObject::connectSlotsByName(MyImageProvider);
    } // setupUi

    void retranslateUi(QDialog *MyImageProvider)
    {
        MyImageProvider->setWindowTitle(QApplication::translate("MyImageProvider", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyImageProvider: public Ui_MyImageProvider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYIMAGEPROVIDER_H
