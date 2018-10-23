#include "imagesmooth.h"

imageSmooth::imageSmooth()
{
    //qDebug() << "I'm in";
}
//平滑-均值
QImage* imageSmooth::imageSimpleBlur(QImage nowImage, int mode)
{
    //qDebug() << nowImage.width() << nowImage.height();
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);

    for(int i=0;i<nowImage.width();i++)
    {
        for(int j=0;j<nowImage.height();j++)
        {
            int newGray,sum=0,sumN=0,left=-(mode/2),right=mode/2;
            //qDebug() << left << right;
            for(int k=left;k<=right;k++)
                for(int l=left;l<=right;l++)
                {
                    if( k!=0 && l!=0 && (i+k) >= 0 && (i+k) < nowImage.width() && (j+l) >= 0 && (j+l) < nowImage.height() )
                    {
                        sumN++;
                        sum += QColor(nowImage.pixel(i+k,j+l)).red();
                    }
                }
            newGray = sum/sumN;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    return result;
}
//平滑-中值
QImage* imageSmooth::imageMdianBlur(QImage nowImage, int mode)
{
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);

    for(int i=0;i<nowImage.width();i++)
    {
        for(int j=0;j<nowImage.height();j++)
        {
            int newGray,sum=0,array[11];
            if(mode == 1)
            {
                for(int k=-1;k<=1;k++)
                    for(int l=-1;l<=1;l++)
                    {
                        if(k!=0 && l!=0 && (i+k) >= 0 && (i+k) < nowImage.width() && (j+l) >= 0 && (j+l) < nowImage.height())
                        {
                            array[sum] = QColor(nowImage.pixel(i+k,j+l)).red();
                            sum ++;
                        }
                    }
            }
            else if(mode == 2)
            {
                if( (i-1) >= 0 && (i-1) < nowImage.width() )
                    array[sum++] = QColor(nowImage.pixel(i-1,j)).red();
                if( (i+1) >= 0 && (i+1) < nowImage.width() )
                    array[sum++] = QColor(nowImage.pixel(i+1,j)).red();
                if( (j+1) >= 0 && (j+1) < nowImage.height() )
                    array[sum++] = QColor(nowImage.pixel(i,j+1)).red();
                if( (j-1) >= 0 && (j-1) < nowImage.height() )
                    array[sum++] = QColor(nowImage.pixel(i,j-1)).red();
            }
            else
            {
                //qDebug() << i << j;
                for(int k=-2;k<=2;k++)
                        if(k!=0 && (i+k) >= 0 && (i+k) < nowImage.width() ) //line y
                        {
                            array[sum] = QColor(nowImage.pixel(i+k,j)).red();
                            sum ++;
                        }
                for(int l=-2;l<=2;l++)
                        if(l!=0 && (j+l) >= 0 && (j+l) < nowImage.height() )// line x
                        {
                            array[sum] = QColor(nowImage.pixel(i,j+l)).red();
                            sum ++;
                        }

            }
            newGray = findMid( array, sum );
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }
    return result;
}
//平滑-K邻域
QImage* imageSmooth::imageNeighborBlur(QImage nowImage, int mode)
{
    QImage* result = new QImage(nowImage.width(),nowImage.height(),nowImage.format());
    initImage(result);
    for(int i=0;i<nowImage.width();i++)
    {
        for(int j=0;j<nowImage.height();j++)
        {
            int newGray=0,sum=0,array[11];

            for(int k=-1;k<=1;k++)
                for(int l=-1;l<=1;l++)
                {
                    if((i+k) >= 0 && (i+k) < nowImage.width() && (j+l) >= 0 && (j+l) < nowImage.height())
                    {
                        //qDebug() << i+k << j+l;
                        array[sum++] = QColor(nowImage.pixel(i+k,j+l)).red();
                    }
                }
            sort(array,array+sum);
            if(mode == 1)
            {
                int k=0;
                //qDebug() << sum;
                for(k=0;k<sum;k++)
                    if(array[k] == QColor(nowImage.pixel(i,j)).red())
                        break;
                if(k == 0)
                    newGray = (array[0]+array[1]+array[2])/3;
                else if(sum>2)
                    newGray = (array[k-1]+array[k+1]+array[k])/3;
            }
            else
            {
                int k=0;
                for(k=0;k<sum;k++)
                    if(array[k] == QColor(nowImage.pixel(i,j)).red())
                        break;
                if(k == 0)
                    newGray = array[k+1];
                else
                    newGray = array[k];
            }
            //qDebug() << newGray;
            if( nowImage.format() == QImage::Format_Indexed8 )
                result->setPixel(i,j,newGray);
            else
                result->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }
    return result;
}
//查找中位数
int imageSmooth::findMid(int *array, int num)
{
    sort(array,array+num);
    if(num%2 == 1)
        return array[num/2];
    else
        return (array[num/2-1]+array[num/2])/2;
}
