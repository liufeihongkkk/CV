#include "screenshot.h"
#include "ui_screenshot.h"
#include "wrongbook.h"

screenShot::screenShot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screenShot)
{
    ui->setupUi(this);
}

screenShot::~screenShot()
{
    delete ui;
}

void screenShot::on_pushButton_clicked()
{
    system("fswebcam --fps 15 -S 8 -r 1080x720 /home/pi/YoutubeChannel/get_image/screenShot/initial.jpg");
}
