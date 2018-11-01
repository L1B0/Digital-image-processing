#ifndef MYWIDGET_H
#define MYWIDGET_H

#include<QWidget>
#include<QAction>
#include<QMenu>
#include<QList>
#include<QMouseEvent>
#include<QApplication>
#include<QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include "mainwindow.h"

class mywidget: public QWidget
{
    Q_OBJECT
public:
    mywidget(QWidget *parent);
    MainWindow *x;
    QImage saveImage;
    mywidget *widgetlist[18];
    QCustomPlot *customlist[20];

public slots:
    void saveSlotClicked();
    void applySlotClicked();

};

#endif // MYWIDGET_H
