#ifndef MYWIDGET_H
#define MYWIDGET_H

#include<QWidget>
#include<QAction>
#include<QMouseEvent>
#include<QApplication>
#include<QMessageBox>
#include <QDebug>
#include <QFileDialog>

class mywidget: public QWidget
{
    Q_OBJECT
public:
    mywidget(QWidget *parent);
    QImage saveImage;

protected:
    //void mousePressEvent(QMouseEvent *event);

public slots:
    void saveSlotClicked();

};

#endif // MYWIDGET_H
