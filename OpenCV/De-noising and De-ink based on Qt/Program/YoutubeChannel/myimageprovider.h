#ifndef MYIMAGEPROVIDER_H
#define MYIMAGEPROVIDER_H

#include <QDialog>


namespace Ui {
class MyImageProvider;
}

class MyImageProvider : public QDialog
{
    Q_OBJECT

public:
    explicit MyImageProvider(QWidget *parent = 0);
    void doDownload();
    ~MyImageProvider();
private:
    Ui::MyImageProvider *ui;
};

#endif // MYIMAGEPROVIDER_H
