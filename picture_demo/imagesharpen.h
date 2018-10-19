#ifndef IMAGESHARPEN_H
#define IMAGESHARPEN_H

#include <mypic.h>

class imageSharpen
{
public:
    imageSharpen();
    int sharpenMode[5][5];
    QImage* imageSharpenRoberts(QImage nowImage);
    QImage* imageSharpenSobel(QImage nowImage);
    QImage* imageSharpenLapla(QImage nowImage);
    QImage* imageSharpenMode(QImage nowImage, int x, int y);
};

#endif // IMAGESHARPEN_H
