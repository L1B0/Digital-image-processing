#include "runlengthcoding.h"

runlengthcoding::runlengthcoding()
{

}

QImage runlengthcoding::decompressFile(QString pp)
{
    //QString2Char*
    char *ppath;
    QByteArray ba = pp.toLatin1();
    ppath = ba.data();
    qDebug() << "path: " << ppath;

    FILE *f = fopen(ppath,"r");
    //read header
    int width,height;
    fread(&width,4,1,f);
    fread(&height,4,1,f);
    qDebug() << width << height;

    int pixelNum=0;
    QImage *dImage = new QImage(width,height,QImage::Format_Indexed8);
    initImage(dImage);
    while(pixelNum < width*height)
    {
        unsigned char x[2];
        fread(x,sizeof(x),1,f);
        //qDebug() << pixelNum ;
        for(unsigned int i=0;i<x[0];i++)
        {
            dImage->setPixel(pixelNum/height,pixelNum%height,x[1]);
            pixelNum++;
        }
    }
    return *dImage;
}
