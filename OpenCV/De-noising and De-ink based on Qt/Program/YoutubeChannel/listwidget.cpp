#include "listwidget.h"
#include "ui_listwidget.h"

listWidget::listWidget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listWidget)
{
    ui->setupUi(this);
    ui->listWidget_2->addItem("Mark");
    ui->listWidget_2->addItem("l");
    ui->listWidget_2->addItem("g");
    ui->listWidget_2->addItem("rs");
}

listWidget::~listWidget()
{
    delete ui;
}
