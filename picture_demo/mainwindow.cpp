#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *file = menuBar()->addMenu(tr("&File"));

    openAction = new QAction(tr("&Open"), this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("Open a file."));
    file->addAction(openAction);
    connect(openAction, SIGNAL(triggered()), this, SLOT(open()));

    saveAction = new QAction(tr("&Save"), this);
    saveAction->setShortcut(QKeySequence::Save);
    saveAction->setStatusTip(tr("Save a file."));
    file->addAction(saveAction);
    connect(saveAction, SIGNAL(triggered()), this, SLOT(save()));

    ui->width->setPlaceholderText(tr("宽度"));
    ui->length->setPlaceholderText(tr("高度"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open()
{
    path = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png *.bmp)"));
    if(path.length() == 0)
    {
        QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }
    else
    {
        QMessageBox::information(NULL, tr("Path"), tr("You selected ") + path);
        myImage.load(path);
        findImageFormat(myImage);

        //初始化
        imageWidth = myImage.width();
        imageHeight = myImage.height();
        imageGray = 256;
        imageType = findImageType(path);
        ui->width->setText(QString::number(imageWidth));
        ui->length->setText(QString::number(imageHeight));
        ui->gray_level->setText(QString::number(imageGray));

        ui->labelimage->setScaledContents(true);
        ui->labelimage->setAlignment(Qt::AlignCenter);
        ui->labelimage->setPixmap(QPixmap::fromImage(myImage));
    }
}
void MainWindow::save()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Image Files(*.jpg *.png *bmp)"));
    qDebug() << fileName;
    if(fileName.length() == 0)
    {
        QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }
    else
    {
        QMessageBox::information(NULL, tr("Path"), tr("You selected ") + fileName);
        qDebug() << imageType;
        newImage.save(fileName);

    }
    return ;
}

void MainWindow::on_re_determine_clicked()
{
    //QMessageBox::information(NULL, tr("Path"), tr("You selected ") + path);
    if( ui->width->text() == "" || ui->length->text() == "")
    {
        QMessageBox::information(NULL,tr("Warning"),tr("输入为空！"));
        ui->width->clear();
        ui->length->clear();
        return ;
    }
    if(!isDigitString(ui->width->text().toStdString().c_str()) || !isDigitString(ui->length->text().toStdString().c_str()))
    {
        QMessageBox::information(NULL,tr("Warning"),tr("请输入数字！"));
        ui->width->clear();
        ui->length->clear();
        return ;
    }

    int imageNewWidth = ui->width->text().toInt(), imageNewHeight = ui->length->text().toInt();
    qDebug() << "newWidth: " << imageNewWidth << "newLength: " << imageNewHeight;

    //采样率不必整除于原来的采样率
    int wspace = imageWidth%imageNewWidth == 0 ? imageWidth/imageNewWidth : imageWidth/imageNewWidth+1;
    int hspace = imageHeight%imageNewHeight == 0 ? imageHeight/imageNewHeight : imageHeight/imageNewHeight+1;
    if(imageNewWidth <= 0 || imageNewWidth > imageWidth || imageNewHeight <= 0 || imageNewHeight > imageHeight) return ;
    qDebug() << imageWidth << imageHeight << wspace << hspace;

    QImage iGray(imageWidth,imageHeight,myImage.format());

    for(int i=0;i<imageNewWidth;i++)
    {
        for(int j=0;j<imageNewHeight;j++)
        {
            QRgb pixel = myImage.pixel(i*wspace,j*hspace);
            for(int ii=0;ii<wspace;ii++)
            {
                for(int jj=0;jj<hspace;jj++)
                {
                    if( (i*wspace+ii < imageWidth) && (j*hspace+jj < imageHeight) )
                        iGray.setPixel(i*wspace+ii,j*hspace+jj,pixel);
                }
            }
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    ui->labelimage->setPixmap(QPixmap::fromImage(iGray));
    newImage = iGray;
    return ;
}

void MainWindow::on_gray_determine_clicked()
{
    if( ui->gray_level->text() == "" )
    {
        QMessageBox::information(NULL,tr("Warning"),tr("输入为空!"));
        ui->gray_level->clear();
        return ;
    }
    if(!isDigitString(ui->gray_level->text().toStdString().c_str()))
    {
        QMessageBox::information(NULL,tr("Warning"),tr("请输入数字!"));
        ui->gray_level->clear();
        return ;
    }

    int level_gray = ui->gray_level->text().toInt();
    if(level_gray <= 0 || level_gray > 256) return ;
    qDebug() << "level_gray: " << level_gray;

    qDebug() << imageWidth << imageHeight;
    QImage iGray = QImage(imageWidth,imageHeight,myImage.format());

    for(int i=0;i<imageWidth;i++)
    {
        for(int j=0;j<imageHeight;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor gray = QColor(pixel);
            int r = gray.red(), level_g = (256/level_gray);
            //qDebug() << r << level_g;
            r = level_g*(r/level_g);
            QRgb newpixel = qRgb(r,r,r);
            iGray.setPixel(i,j,newpixel);
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    ui->labelimage->setPixmap(QPixmap::fromImage(iGray));
    newImage = iGray;

    return ;
}

void MainWindow::on_bitPlane_clicked()
{
    qDebug() << "path: " << path;
    qDebug() << "image: " << imageType;
    bitplane *bp = new bitplane();
    bp->setWindowTitle("灰度图转位平面");
    bp->show();
}

