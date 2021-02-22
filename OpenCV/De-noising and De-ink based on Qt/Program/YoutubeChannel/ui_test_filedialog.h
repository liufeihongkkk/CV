/********************************************************************************
** Form generated from reading UI file 'test_filedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_FILEDIALOG_H
#define UI_TEST_FILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_test_fileDialog
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *test_fileDialog)
    {
        if (test_fileDialog->objectName().isEmpty())
            test_fileDialog->setObjectName(QStringLiteral("test_fileDialog"));
        test_fileDialog->resize(400, 300);
        pushButton = new QPushButton(test_fileDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 90, 151, 61));

        retranslateUi(test_fileDialog);

        QMetaObject::connectSlotsByName(test_fileDialog);
    } // setupUi

    void retranslateUi(QDialog *test_fileDialog)
    {
        test_fileDialog->setWindowTitle(QApplication::translate("test_fileDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("test_fileDialog", "Open File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test_fileDialog: public Ui_test_fileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_FILEDIALOG_H
