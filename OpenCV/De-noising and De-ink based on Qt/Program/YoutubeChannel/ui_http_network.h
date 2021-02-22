/********************************************************************************
** Form generated from reading UI file 'http_network.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTTP_NETWORK_H
#define UI_HTTP_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_http_network
{
public:

    void setupUi(QDialog *http_network)
    {
        if (http_network->objectName().isEmpty())
            http_network->setObjectName(QStringLiteral("http_network"));
        http_network->resize(400, 300);

        retranslateUi(http_network);

        QMetaObject::connectSlotsByName(http_network);
    } // setupUi

    void retranslateUi(QDialog *http_network)
    {
        http_network->setWindowTitle(QApplication::translate("http_network", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class http_network: public Ui_http_network {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTTP_NETWORK_H
