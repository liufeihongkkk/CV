#include "secdialog.h"
#include "ui_secdialog.h"
#include "mainwindow.h" //add to the intend to inverted page

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}
