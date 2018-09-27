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
#include <QTableWidget>
#include <customtabstyle.h>
#include <math.h>

extern QImage myImage,newImage;
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
int interation_gary(double aver);

#endif // MYPIC_H
