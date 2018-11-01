#include "mywidget.h"

mywidget::mywidget(QWidget *parent):
    QWidget(parent)
{

    QAction *saveMenu = new QAction(this);
    saveMenu->setText("保存");
    QAction *apply = new QAction(this);
    apply->setText("应用");
    QList<QAction*> actionList;
    actionList<<saveMenu<<apply;

    this->addActions(actionList);

    connect(saveMenu,SIGNAL(triggered(bool)),this,SLOT(saveSlotClicked()));
    connect(apply,SIGNAL(triggered(bool)),this,SLOT(applySlotClicked()));

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

void mywidget::applySlotClicked()
{
    x->apply(saveImage);
    return ;
}
