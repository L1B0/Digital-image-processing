#ifndef MYWIDGET_H
#define MYWIDGET_H

#include<iostream>
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
#include<fstream>
#include<iomanip>
using namespace std;


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
    void huffmanCodingSlotClicked();
    void runLengthCodingSlotClicked();

};

#endif // MYWIDGET_H
