#ifndef IMAGESHARPENMODE_H
#define IMAGESHARPENMODE_H

#include <QDialog>
#include <QMessageBox>
#include <imagesharpen.h>

namespace Ui {
class imageSharpenMode;
}

class imageSharpenMode : public QDialog
{
    Q_OBJECT

public:
    explicit imageSharpenMode(QWidget *parent = 0);
    ~imageSharpenMode();
    imageSharpen now;
    int x,y;
    bool flag;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::imageSharpenMode *ui;
};

#endif // IMAGESHARPENMODE_H
