#ifndef GETTHEIMAGE_H
#define GETTHEIMAGE_H

#include <QDialog>

namespace Ui {
class GetTheImage;
}

class GetTheImage : public QDialog
{
    Q_OBJECT

public:
    explicit GetTheImage(QWidget *parent = 0);
    ~GetTheImage();
    QString file_name;
    QString title;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::GetTheImage *ui;
};

#endif // GETTHEIMAGE_H
