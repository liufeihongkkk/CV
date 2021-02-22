#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QDialog>

namespace Ui {
class listWidget;
}

class listWidget : public QDialog
{
    Q_OBJECT

public:
    explicit listWidget(QWidget *parent = 0);
    ~listWidget();

private:
    Ui::listWidget *ui;
};

#endif // LISTWIDGET_H
