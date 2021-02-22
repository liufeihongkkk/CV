/********************************************************************************
** Form generated from reading UI file 'happy.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAPPY_H
#define UI_HAPPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_happy
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *happy)
    {
        if (happy->objectName().isEmpty())
            happy->setObjectName(QStringLiteral("happy"));
        happy->resize(400, 300);
        pushButton = new QPushButton(happy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 130, 82, 25));

        retranslateUi(happy);

        QMetaObject::connectSlotsByName(happy);
    } // setupUi

    void retranslateUi(QDialog *happy)
    {
        happy->setWindowTitle(QApplication::translate("happy", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("happy", "nihao", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class happy: public Ui_happy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAPPY_H
