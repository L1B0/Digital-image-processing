#ifndef IMAGESMOOTH_H
#define IMAGESMOOTH_H

#include <iostream>
#include <mypic.h>
#include <algorithm>
using namespace std;

class imageSmooth
{
public:
    imageSmooth();
    int findMid(int* array, int num);
    QImage* imageSimpleBlur(QImage nowImage, int mode);
    QImage* imageMdianBlur(QImage nowImage, int mode);
    QImage* imageNeighborBlur(QImage nowImage, int mode);
};

#endif // IMAGESMOOTH_H
