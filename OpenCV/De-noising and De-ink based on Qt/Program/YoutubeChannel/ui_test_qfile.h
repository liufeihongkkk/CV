/********************************************************************************
** Form generated from reading UI file 'test_qfile.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_QFILE_H
#define UI_TEST_QFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_test_qfile
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *test_qfile)
    {
        if (test_qfile->objectName().isEmpty())
            test_qfile->setObjectName(QStringLiteral("test_qfile"));
        test_qfile->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(test_qfile);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(test_qfile);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(test_qfile);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(test_qfile);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(test_qfile);

        QMetaObject::connectSlotsByName(test_qfile);
    } // setupUi

    void retranslateUi(QDialog *test_qfile)
    {
        test_qfile->setWindowTitle(QApplication::translate("test_qfile", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("test_qfile", "Write", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("test_qfile", "Read", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test_qfile: public Ui_test_qfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_QFILE_H
