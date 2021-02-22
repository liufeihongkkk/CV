#include "happy.h"
#include "ui_happy.h"

happy::happy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::happy)
{
    ui->setupUi(this);
}

happy::~happy()
{
    delete ui;
}
