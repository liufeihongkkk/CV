#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QDialog>
#include "wrongbook.h"
namespace Ui {
class screenShot;
}

class screenShot : public QDialog
{
    Q_OBJECT

public:
    explicit screenShot(QWidget *parent = 0);
    ~screenShot();

private slots:
    void on_pushButton_clicked();

private:
    Ui::screenShot *ui;
};

#endif // SCREENSHOT_H
