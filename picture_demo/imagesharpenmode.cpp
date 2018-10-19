#include "imagesharpenmode.h"
#include "ui_imagesharpenmode.h"

imageSharpenMode::imageSharpenMode( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imageSharpenMode)
{
    ui->setupUi(this);
}

imageSharpenMode::~imageSharpenMode()
{
    delete ui;
}

void imageSharpenMode::on_buttonBox_accepted()
{
    x = ui->x->text().toInt(), y = ui->y->text().toInt();
    if( x > 5 || x <= 0 || y > 5 || y <= 0 )
    {
        this->flag = false;
        QMessageBox::critical(this,"错误","大小不能超过5*5",QMessageBox::Yes);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if( ui->tableWidget->item(i,j) == NULL )
            {
                this->flag = false;
                QMessageBox::critical(this,"错误","有空值",QMessageBox::Yes);
                return ;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            //qDebug() << i << j << ui->tableWidget->item(i,j)->text().toInt();
            this->now.sharpenMode[i][j] = ui->tableWidget->item(i,j)->text().toInt();
        }
    }
}
