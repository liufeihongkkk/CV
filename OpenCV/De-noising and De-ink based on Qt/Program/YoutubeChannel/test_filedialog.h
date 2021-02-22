#ifndef TEST_FILEDIALOG_H
#define TEST_FILEDIALOG_H

#include <QDialog>

namespace Ui {
class test_fileDialog;
}

class test_fileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit test_fileDialog(QWidget *parent = 0);
    ~test_fileDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::test_fileDialog *ui;
};

#endif // TEST_FILEDIALOG_H
