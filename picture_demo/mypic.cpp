#include <mypic.h>

bool isDigitString(const QString& src)
{
    const char *s = src.toUtf8().data();
    while(*s && *s>='0' && *s<='9')s++;
    return !bool(*s);
}

void qstring2char(QString ppath)
{
    //toLatin1().data() directly is wrong!
    QByteArray ba = ppath.toLatin1();
    cpath = ba.data();
    qDebug() << "cpath: " << cpath << "len: " << strlen(cpath);
    return ;
}

char findImageType(QString ppath)
{
    qstring2char(ppath);

    for(int i=0;i<strlen(cpath);i++)
    {
        //qDebug() << "cpath[i]: " << i << cpath[i];
        if(cpath[i] == '.')
        {
            qDebug() << "imageType: " << cpath[i+1];
            return cpath[i+1];
        }
    }
    return 0;
}

//int findImageGray(QImage nowImage)
//{
//    int nowGray=0;
//    for(int j=0;j<imageWidth;j++)
//    {
//        QRgb pixel = nowImage.pixel(0,j);
//        QColor gray = QColor(pixel);
//        int k, r = gray.red(), g = gray.green(), b = gray.blue();
//        qDebug() << "gray: " << r << g << b;
//        for(k=1;k<255;k++)
//        {
//            if(r%k != 0)
//                break;
//        }
//        nowGray = nowGray > 256/(k-1) ? nowGray : ;
//    }
//    return nowGray;
//}

void findImageFormat(QImage nowImage)
{
    char imageFormat[26][50] = {"QImage::Format_Invalid",
                                 "QImage::Format_Mono",
                                 "QImage::Format_MonoLSB",
                                 "QImage::Format_Indexed8",
                                 "QImage::Format_RGB32",
                                 "QImage::Format_ARGB32",
                                 "QImage::Format_ARGB32_Premultiplied",
                                 "QImage::Format_RGB16",
                                 "QImage::Format_ARGB8565_Premultiplied",
                                 "QImage::Format_RGB666",
                                 "QImage::Format_ARGB6666_Premultiplied",
                                 "QImage::Format_RGB555",
                                 "QImage::Format_ARGB8555_Premultiplied",
                                 "QImage::Format_RGB888",
                                 "QImage::Format_RGB444",
                                 "QImage::Format_ARGB4444_Premultiplied",
                                 "QImage::Format_RGBX8888",
                                 "QImage::Format_RGBA8888",
                                 "QImage::Format_RGBA8888_Premultiplied",
                                 "QImage::Format_BGR30",
                                 "QImage::Format_A2BGR30_Premultiplied",
                                 "QImage::Format_RGB30",
                                 "QImage::Format_A2RGB30_Premultiplied",
                                 "QImage::Format_Alpha8",
                                 "QImage::Format_Grayscale8"};
    QMessageBox::information(NULL, QObject::tr("ImageFormat"), imageFormat[nowImage.format()]);
    return ;
}

int getBit(int n, int moveBit)
{
    if((n>>moveBit)%2){
        return 255;
    }
    else return 0;
}

int interation_gary(double aver)
{
    int now_gray[256]={0};
    for(int i=0;i<imageWidth;i++)
    {
        for(int j=0;j<imageHeight;j++)
        {
            QRgb a = myImage.pixel(i,j);
            QColor b = QColor(a);
            now_gray[b.red()] ++;
        }
    }
    int now=(int)aver,next=-1;
    while(1)
    {
        qDebug() << "now = " << now << "next = " << next;
        int a=0,b=0,suma=0,sumb=0;
        for(int i=0;i<=now;i++)
            a += now_gray[i]*i, suma += now_gray[i];
        for(int i=now+1;i<256;i++)
            b += now_gray[i]*i, sumb += now_gray[i];
        a /= suma;
        b /= sumb;
        next = (a+b)/2;
        if( now == next )
            break;
        now = next, next = -1;
    }
    return now;
}

//void my_find_children(QWidget *nowWiget,int pointType,QLabel *nowimage,QCustomPlot *nowpaint,float &a,float &b)
//{
//    QObjectList list = nowWiget->children();
//
//    qDebug() << "parent name : " << nowWiget->objectName();
//    qDebug() << "child num: " << list.length();
//    foreach (QObject *obj, list) {
//        qDebug() << "level 1";
//        qDebug() << obj->metaObject()->className();
//        qDebug() << "ojcName: " << obj->objectName();
//        if(obj->metaObject()->className() == QStringLiteral("QWidget")){
//            qDebug() << "level 2";
//            QObjectList list2 = obj->children();
//            foreach (QObject *obj1, list2) {
//                qDebug() << obj1->metaObject()->className();
//                qDebug() << "ojc1 Name: " << obj1->objectName();
//
//                if(obj1->metaObject()->className() == QStringLiteral("QHBoxLayout"))
//                {
//                    qDebug() << "level 3";
//                    QObjectList list3 = obj1->children();
//                    foreach (QObject *obj2, list3) {
//                        qDebug() << "ojc2 Name: " << obj2->objectName();
//                        if(obj2->metaObject()->className() == QStringLiteral("QLineEdit")){
//                            QObjectList list4 = obj2->children();
//                            foreach (QObject *obj3, list4) {
//                                if(QString("%1").arg(obj3->objectName()).contains("a"))
//                                    a = qobject_cast<QLineEdit*>(obj3)->text().toFloat();
//                                else
//                                    b = qobject_cast<QLineEdit*>(obj3)->text().toFloat();
//                                qDebug() << "find a or b : " << a << b;
//                            }
//                        }
//
//                    }
//                }
//
//                else if( QString("%1").arg(obj1->objectName()).contains("trans") && QString("%1").arg(obj1->objectName()).contains("image") )
//                {
//                    qDebug() << "find trans image!!!";
//                    nowimage = qobject_cast<QLabel*>(obj1);
//                }
//                else if( QString("%1").arg(obj1->objectName()).contains("trans") && QString("%1").arg(obj1->objectName()).contains("paint") )
//                {
//                    qDebug() << "find trans paint!!!";
//                    nowpaint = qobject_cast<QCustomPlot*>(obj1);
//                }
//            }
//        }
//    }
//    qDebug() << "nowimage: " << nowimage->objectName();
//    qDebug() << "nowpaint: " << nowpaint->objectName();
//    qDebug() << "find children finished ! ";
//
//}