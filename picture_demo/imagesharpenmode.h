#ifndef IMAGESHARPENMODE_H
#define IMAGESHARPENMODE_H

#include <QDialog>

namespace Ui {
class imageSharpenMode;
}

class imageSharpenMode : public QDialog
{
    Q_OBJECT

public:
    explicit imageSharpenMode(QWidget *parent = 0);
    ~imageSharpenMode();

private:
    Ui::imageSharpenMode *ui;
};

#endif // IMAGESHARPENMODE_H
