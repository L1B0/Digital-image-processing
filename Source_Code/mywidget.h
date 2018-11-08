#ifndef MYWIDGET_H
#define MYWIDGET_H


#include<algorithm>
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
#include "huffmancoding.h"



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
    void houghSlotClicked();
    void huffmanCodingSlotClicked();
    void runLengthCodingSlotClicked();
    void marginalClosureSlotClicked();
};

#endif // MYWIDGET_H
