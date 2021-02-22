#ifndef CAMERA_H
#define CAMERA_H

#include <QDialog>
#include "screenshot.h"

namespace Ui {
class camera;
}

class camera : public QDialog
{
    Q_OBJECT

public:
    explicit camera(QWidget *parent = 0);
    ~camera();

private slots:
    void on_pushButton_clicked();

private:
    Ui::camera *ui;

};

#endif // CAMERA_H
