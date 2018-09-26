#ifndef FUNC_H
#define FUNC_H

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

extern QImage myImage,newImage;
extern QString path;
extern char imageType;
extern int imageWidth,imageHeight,imageGray;

bool isDigitString(const QString& src);
char findImageType(QString path);
//int findImageGray(QImage nowImage);
void findImageFormat(QImage nowImage);

#endif // FUNC_H
