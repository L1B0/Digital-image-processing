#include "imagesharpenmode.h"
#include "ui_imagesharpenmode.h"

imageSharpenMode::imageSharpenMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imageSharpenMode)
{
    ui->setupUi(this);
}

imageSharpenMode::~imageSharpenMode()
{
    delete ui;
}
