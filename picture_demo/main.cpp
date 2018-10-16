#include "mainwindow.h"
#include <QApplication>

//very important
QImage myImage;
QString path;
char imageType;
const char *cpath;
int imageWidth,imageHeight,imageGray;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFileDialog fd;
    MainWindow w;
    fd.setAcceptMode(QFileDialog::AcceptOpen);
    fd.setViewMode(QFileDialog::Detail);//详细
    fd.setFileMode(QFileDialog::ExistingFile);
    w.setWindowTitle("数字图像处理-By L1B0");
    w.show();

    return a.exec();
}
