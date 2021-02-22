/********************************************************************************
** Form generated from reading UI file 'listwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_H
#define UI_LISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_listWidget
{
public:
    QListWidget *listWidget_2;
    QPushButton *pushButton;

    void setupUi(QDialog *listWidget)
    {
        if (listWidget->objectName().isEmpty())
            listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->resize(400, 300);
        listWidget_2 = new QListWidget(listWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(70, 60, 256, 192));
        pushButton = new QPushButton(listWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 160, 82, 25));

        retranslateUi(listWidget);

        QMetaObject::connectSlotsByName(listWidget);
    } // setupUi

    void retranslateUi(QDialog *listWidget)
    {
        listWidget->setWindowTitle(QApplication::translate("listWidget", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("listWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class listWidget: public Ui_listWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_H
