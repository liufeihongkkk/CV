#include "qdir.h"
#include "ui_qdir.h"
#include <QDir>

Qdir::Qdir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Qdir)
{
    ui->setupUi(this);
    QDir dir("/home/pi");
    if(dir.)
}

Qdir::~Qdir()
{
    delete ui;
}
