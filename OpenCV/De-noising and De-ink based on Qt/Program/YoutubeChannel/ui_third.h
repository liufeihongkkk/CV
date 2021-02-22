/********************************************************************************
** Form generated from reading UI file 'third.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRD_H
#define UI_THIRD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Third
{
public:
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *Third)
    {
        if (Third->objectName().isEmpty())
            Third->setObjectName(QStringLiteral("Third"));
        Third->resize(400, 300);
        checkBox = new QCheckBox(Third);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 90, 88, 23));
        pushButton = new QPushButton(Third);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 180, 82, 25));
        widget = new QWidget(Third);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 50, 72, 54));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        retranslateUi(Third);

        QMetaObject::connectSlotsByName(Third);
    } // setupUi

    void retranslateUi(QDialog *Third)
    {
        Third->setWindowTitle(QApplication::translate("Third", "Dialog", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Third", "Do you like it?", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Third", "Check", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Third", "Jason", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Third", "Jeremy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Third: public Ui_Third {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRD_H
