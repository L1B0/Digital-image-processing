#ifndef MYPIC_H
#define MYPIC_H

#include <stdio.h>
#include <string.h>
#include <QtWidgets>
#include <QObject>
#include <QPainter>
#include <QDebug>
#include <QFileDialog>
#include <QImage>
#include <QMessageBox>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QLabel>
#include <QScrollArea>
#include <QTableWidget>
#include <customtabstyle.h>
#include <math.h>
#include <qcustomplot.h>

extern QImage myImage;
extern QString path;
extern char imageType;
extern const char *cpath;
extern int imageWidth,imageHeight,imageGray;

bool isDigitString(const QString& src);
char findImageType(QString ppath);
//int findImageGray(QImage nowImage);
void findImageFormat(QImage nowImage);
void qstring2char(QString ppath);
int getBit(int n, int moveBit);
int interationGary(double aver);
//void my_find_children(QWidget *nowWiget,int pointType,QLabel *trans_image,QCustomPlot *trans_point,float &a,float &b);
void initImage(QImage *nowImage);
QImage rgb2grayImage(QImage nowImage);
int testGray(QImage nowImage);
bool isBinImage(QImage nowImage);
int bin2dec(char *s);

#endif // MYPIC_H
