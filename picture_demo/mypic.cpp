#include <func.h>

bool isDigitString(const QString& src)
{
    const char *s = src.toUtf8().data();
    while(*s && *s>='0' && *s<='9')s++;
    return !bool(*s);
}

char findImageType(QString path)
{
    const char *cpath = path.toLatin1().data(); //tostdfstring youkeng!
    qDebug() << cpath;
    for(int i=0;i<strlen(cpath);i++)
    {
        if(cpath[i] == '.')
        {
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
