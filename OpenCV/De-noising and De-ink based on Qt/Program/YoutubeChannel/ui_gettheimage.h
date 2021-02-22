/********************************************************************************
** Form generated from reading UI file 'gettheimage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETTHEIMAGE_H
#define UI_GETTHEIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetTheImage
{
public:
    QPushButton *pushButton_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_getimage;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *GetTheImage)
    {
        if (GetTheImage->objectName().isEmpty())
            GetTheImage->setObjectName(QStringLiteral("GetTheImage"));
        GetTheImage->resize(547, 420);
        pushButton_4 = new QPushButton(GetTheImage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 380, 82, 25));
        widget = new QWidget(GetTheImage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 10, 485, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_getimage = new QLabel(widget);
        label_getimage->setObjectName(QStringLiteral("label_getimage"));

        verticalLayout->addWidget(label_getimage);

        widget1 = new QWidget(GetTheImage);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 270, 485, 87));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(GetTheImage);

        QMetaObject::connectSlotsByName(GetTheImage);
    } // setupUi

    void retranslateUi(QDialog *GetTheImage)
    {
        GetTheImage->setWindowTitle(QApplication::translate("GetTheImage", "Dialog", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GetTheImage", "next", Q_NULLPTR));
        label_getimage->setText(QString());
        label->setText(QApplication::translate("GetTheImage", "<html><head/><body><p><span style=\" font-weight:600;\">Pls choose u wanna find the image in the folder or on the camera?</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("GetTheImage", "<html><head/><body><p><span style=\" font-style:italic;\">A. Find from the folder:</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("GetTheImage", "<html><head/><body><p><span style=\" font-style:italic;\">B. Find from the camera:</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GetTheImage", "...", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GetTheImage", "...", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GetTheImage", "ScreenShot", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GetTheImage: public Ui_GetTheImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETTHEIMAGE_H
