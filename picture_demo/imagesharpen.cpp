#include "imagesharpen.h"

imageSharpen::imageSharpen()
{

}

QImage* imageSharpen::imageSharpenRoberts(QImage nowImage)
{
    QMessageBox::information(NULL, QObject::tr("Sharpen"), QObject::tr("Roberts"));
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);
        qDebug() << nowImage.width() << nowImage.height();
    for(int i=0;i<nowImage.width()-1;i++)
    {
        for(int j=0;j<nowImage.height()-1;j++)
        {
            int newGray=0,a,b;

            a = QColor(nowImage.pixel(i+1,j+1)).red() - QColor(nowImage.pixel(i,j)).red();
            b = QColor(nowImage.pixel(i+1,j)).red() - QColor(nowImage.pixel(i,j+1)).red();
            newGray = abs(a)+abs(b);

            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}

QImage* imageSharpen::imageSharpenSobel(QImage nowImage)
{
    QMessageBox::information(NULL, QObject::tr("Path"), QObject::tr("Sobel"));
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);
    int dx[9] = {-1,0,1,-2,0,2,-1,0,1}, dy[9] = {-1,-2,-1,0,0,0,1,2,1};
    for(int i=0;i<nowImage.width();i++)
    {
        for(int j=0;j<nowImage.height();j++)
        {
            int newGray=0;
            double ddx=0, ddy = 0;
            for(int k=0;k<9;k++)
            {
                int x=i+k%3-1, y=j+k/3-1;
                if( x >= 0 && x < nowImage.width() && y >= 0 && y < nowImage.height() )
                {
                    ddx += dx[k]*QColor(nowImage.pixel(x,y)).red();
                    ddy += dy[k]*QColor(nowImage.pixel(x,y)).red();
                }
                else if( x >= 0 && x < nowImage.width() )
                {
                    ddx += dx[k]*QColor(nowImage.pixel(x,j-k/3+1)).red();
                    ddy += dy[k]*QColor(nowImage.pixel(x,j-k/3+1)).red();
                }
                else if( y >= 0 && y < nowImage.height() )
                {
                    ddx += dx[k]*QColor(nowImage.pixel(i-k%3+1,y)).red();
                    ddy += dy[k]*QColor(nowImage.pixel(i  -k%3+1,y)).red();
                }
                else
                {
                    ddx += dx[k]*QColor(nowImage.pixel(i-k%3+1,j-k/3+1)).red();
                    ddy += dy[k]*QColor(nowImage.pixel(i-k%3+1,j-k/3+1)).red();
                }
            }
            newGray = (int)sqrt((ddx*ddx+ddy*ddy))%256;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}

QImage* imageSharpen::imageSharpenLapla(QImage nowImage)
{
    QMessageBox::information(NULL, QObject::tr("Path"), QObject::tr("Lapla"));
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);

    for(int i=0;i<nowImage.width();i++)
    {
        for(int j=0;j<nowImage.height();j++)
        {
            int newGray=0, num=0;
            if( (j-1) >= 0 && (j-1) < nowImage.height() )
                num++,newGray -= QColor(nowImage.pixel(i,j-1)).red();
            if( (j+1) >= 0 && (j+1) < nowImage.height() )
                num++,newGray -= QColor(nowImage.pixel(i,j+1)).red();
            if( (i-1) >= 0 && (i-1) < nowImage.width() )
                num++,newGray -= QColor(nowImage.pixel(i-1,j)).red();
            if( (i+1) >= 0 && (i+1) < nowImage.width() )
                num++,newGray -= QColor(nowImage.pixel(i+1,j)).red();

            newGray = abs(newGray+num*QColor(nowImage.pixel(i,j)).red());
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}

QImage* imageSharpen::imageSharpenMode(QImage nowImage, int x, int y)
{
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);

    for(int i=0;i<nowImage.width();i++)
    {
        for(int j=0;j<nowImage.height();j++)
        {
            int newGray=0, num=0;

            for(int k=0;k<x;k++)
            {
                for(int l=0;l<y;l++)
                {
                    int xx = i+k-x/2, yy = j+l-y/2;
                    if( xx >= 0 && xx < nowImage.width() && yy >= 0 && yy < nowImage.height() )
                    {
                        num++;
                        newGray += sharpenMode[k][l]*QColor(nowImage.pixel(xx,yy)).red();;
                    }
                }
            }
            newGray = abs(newGray);
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}
