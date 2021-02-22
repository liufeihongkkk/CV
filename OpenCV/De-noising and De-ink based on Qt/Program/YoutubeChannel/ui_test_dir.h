/********************************************************************************
** Form generated from reading UI file 'test_dir.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_DIR_H
#define UI_TEST_DIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_test_Dir
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *test_Dir)
    {
        if (test_Dir->objectName().isEmpty())
            test_Dir->setObjectName(QStringLiteral("test_Dir"));
        test_Dir->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(test_Dir);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(test_Dir);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        listWidget = new QListWidget(test_Dir);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(test_Dir);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(test_Dir);

        QMetaObject::connectSlotsByName(test_Dir);
    } // setupUi

    void retranslateUi(QDialog *test_Dir)
    {
        test_Dir->setWindowTitle(QApplication::translate("test_Dir", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("test_Dir", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test_Dir: public Ui_test_Dir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_DIR_H
