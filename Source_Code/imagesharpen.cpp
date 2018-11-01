#include "imagesharpen.h"

imageSharpen::imageSharpen()
{

}

//锐化-Roberts
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
            if( newGray > 255 ) newGray = 255;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}
//锐化-Sobel
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
//锐化-Lapla
QImage* imageSharpen::imageSharpenLapla(QImage nowImage)
{
    QMessageBox::information(NULL, QObject::tr("Path"), QObject::tr("Lapla"));
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);

    for(int i=1;i<nowImage.width()-1;i++)
    {
        for(int j=1;j<nowImage.height()-1;j++)
        {
            int newGray=0;
            newGray -= QColor(nowImage.pixel(i,j-1)).red();
            newGray -= QColor(nowImage.pixel(i,j+1)).red();
            newGray -= QColor(nowImage.pixel(i-1,j)).red();
            newGray -= QColor(nowImage.pixel(i+1,j)).red();

            newGray = abs(newGray+4*QColor(nowImage.pixel(i,j)).red());
            if(newGray < 0) newGray = 0;
            if( newGray > 255 ) newGray = 255;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}

QImage* imageSharpen::imageSharpenKirsch(QImage nowImage)
{
    QMessageBox::information(NULL, QObject::tr("Path"), QObject::tr("Kirsch"));
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);

    int kirschMode[8][3][3]={ {{5,5,5},{-3,0,-3},{-3,-3,-3}}, {{-3,5,5},{-3,0,5},{-3,-3,-3}}, {{-3,-3,5},{-3,0,5},{-3,-3,5}}, {{-3,-3,-3},{-3,0,5},{-3,5,5}}, {{-3,-3,-3},{-3,0,-3},{5,5,5}}, {{-3,-3,-3},{5,0,-3},{5,5,-3}}, {{5,-3,-3},{5,0,-3},{5,-3,-3}}, {{5,5,-3},{5,0,-3},{-3,-3,-3}} };

    for(int i=1;i<nowImage.width()-1;i++)
    {
        for(int j=1;j<nowImage.height()-1;j++)
        {
            int newGray=0, k[8]={0,0,0,0,0,0,0,0}, m4x=0;
            for(int x=0;x<3;x++)
            {
                for(int y=0;y<3;y++)
                {
                    int gray = QColor(nowImage.pixel(i+x-1,j+y-1)).red();
                    k[0] += gray*kirschMode[0][x][y];
                    k[1] += gray*kirschMode[1][x][y];
                    k[2] += gray*kirschMode[2][x][y];
                    k[3] += gray*kirschMode[3][x][y];
                    k[4] += gray*kirschMode[4][x][y];
                    k[5] += gray*kirschMode[5][x][y];
                    k[6] += gray*kirschMode[6][x][y];
                    k[7] += gray*kirschMode[7][x][y];
                }
            }
            m4x = k[0];
            //qDebug() << k[0] << k[1] << k[2] << k[3] << k[4] << k[5] << k[6] << k[7];
            for(int x=1;x<8;x++)
                m4x = m4x > k[x] ? m4x : k[x];
            //qDebug() << m4x;
            newGray = m4x;

            if(newGray < 0) newGray = 0;
            if(newGray > 255) newGray = 255;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}

//图像增强-自定义
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
            if( newGray > 255 ) newGray = 255;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}
