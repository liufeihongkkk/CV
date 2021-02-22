#include "menu.h"
#include "ui_menu.h"
#include <QMessageBox>

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/Resources/img/image.jpg"),"Mark");
    ui->comboBox->addItem("jASON");
    ui->comboBox->addItem("Kerry");
    ui->comboBox->addItem("sEPH");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",ui->comboBox->currentText());
}
