#include "mywidget.h"

mywidget::mywidget(QWidget *parent):
    QWidget(parent)
{
    QAction *saveMenu = new QAction("save");
    this->addAction(saveMenu);
    //QMessageBox::information(NULL,QString("Init"),QString("Successfully"));
    connect(saveMenu,SIGNAL(triggered(bool)),this,SLOT(saveSlotClicked()));
}

void mywidget::saveSlotClicked()
{
    //QMessageBox::information(NULL,QString("Save"),QString("Test"));
    qDebug() << this->objectName();

    QString fileName = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Image Files(*.jpg *.png *bmp)"));
    qDebug() << fileName;
    if(fileName.length() == 0)
    {
        QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }
    else
    {
        QMessageBox::information(NULL, tr("Path"), tr("You selected ") + fileName);
        this->saveImage.save(fileName);
    }
    return ;
}

