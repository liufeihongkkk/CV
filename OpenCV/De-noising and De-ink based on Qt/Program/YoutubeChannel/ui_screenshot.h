/********************************************************************************
** Form generated from reading UI file 'screenshot.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOT_H
#define UI_SCREENSHOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_screenShot
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *screenShot)
    {
        if (screenShot->objectName().isEmpty())
            screenShot->setObjectName(QStringLiteral("screenShot"));
        screenShot->resize(105, 66);
        pushButton = new QPushButton(screenShot);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 82, 25));

        retranslateUi(screenShot);

        QMetaObject::connectSlotsByName(screenShot);
    } // setupUi

    void retranslateUi(QDialog *screenShot)
    {
        screenShot->setWindowTitle(QApplication::translate("screenShot", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("screenShot", "SHOT!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class screenShot: public Ui_screenShot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOT_H
