#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //文件打开保存
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
    ui->gray_level->setPlaceholderText(tr("灰度级"));

    //功能栏
    ui->tabWidget->tabBar()->setStyle(new CustomTabStyle);
    ui->tabWidget->setCurrentIndex(0);
    QCPGraph *phGraph = ui->histogram_paint->addGraph();
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

        qDebug() << "open: " << "width = " << imageWidth << "height = " << imageHeight;
        //初始化功能页面
        ui->original_page->setAlignment(Qt::AlignCenter);
        ui->original_page->setPixmap(QPixmap::fromImage(myImage));
        ui->sampling_page->setAlignment(Qt::AlignCenter);
        ui->sampling_page->setPixmap(QPixmap::fromImage(myImage));
        ui->gray_page->setAlignment(Qt::AlignCenter);
        ui->gray_page->setPixmap(QPixmap::fromImage(myImage));
        ui->histogram_page->setAlignment(Qt::AlignCenter);
        ui->histogram_page->setPixmap(QPixmap::fromImage(myImage));

        myshow_bitplane();
        create_histogram();
        ui->tabWidget->setCurrentIndex(0);
    }
    return ;
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

void MainWindow::on_sampling_clicked()
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
            if( i*wspace >= imageWidth || j*hspace >= imageHeight ) continue;
            QRgb pixel = myImage.pixel(i*wspace,j*hspace);
            for(int ii=0;ii<wspace;ii++)
            {
                for(int jj=0;jj<hspace;jj++)
                {
                    if( ((i*wspace+ii) < imageWidth) && ((j*hspace+jj) < imageHeight) )
                        iGray.setPixel(i*wspace+ii,j*hspace+jj,pixel);
                }
            }
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    ui->sampling_page->setPixmap(QPixmap::fromImage(iGray));
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
    ui->gray_page->setPixmap(QPixmap::fromImage(iGray));
    newImage = iGray;

    return ;
}

void MainWindow::mysave_bitplane()
{
    for(int i=1;i<=8;i++)
        myshow(i,'a');
    return ;
}

void MainWindow::myshow_bitplane()
{
    for(int i=1;i<=8;i++)
        myshow(i,'h');
    return ;
}

void MainWindow::myshow(int num, char flag)
{
    int w = myImage.width(), h = myImage.height();
    //qDebug() << "myshow: " << "width = " << w << "height = " << h;
    QImage bitplaneImage(w,h,myImage.format());

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor gray = QColor(pixel);
            int r = gray.red(), g = gray.green(), b = gray.blue();
            //qDebug() << "r=" << r << "g=" << g << "b=" << b;
            r = getBit(r,num-1);
            g = getBit(g,num-1);
            b = getBit(b,num-1);
            //qDebug() << "r=" << r << "g=" << g << "b=" << b;
            QRgb newpixel = qRgb(r,g,b);
            //qDebug() << "myshow: i = " << i << "j = " << j;
            bitplaneImage.setPixel(i,j,newpixel);
        }
    }

    if( flag == 'h' )
    {
        switch (num) {
        case 1:
            ui->bit1->setScaledContents(true);
            ui->bit1->setAlignment(Qt::AlignCenter);
            ui->bit1->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 2:
            ui->bit2->setScaledContents(true);
            ui->bit2->setAlignment(Qt::AlignCenter);
            ui->bit2->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 3:
            ui->bit3->setScaledContents(true);
            ui->bit3->setAlignment(Qt::AlignCenter);
            ui->bit3->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 4:
            ui->bit4->setScaledContents(true);
            ui->bit4->setAlignment(Qt::AlignCenter);
            ui->bit4->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 5:
            ui->bit5->setScaledContents(true);
            ui->bit5->setAlignment(Qt::AlignCenter);
            ui->bit5->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 6:
            ui->bit6->setScaledContents(true);
            ui->bit6->setAlignment(Qt::AlignCenter);
            ui->bit6->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 7:
            ui->bit7->setScaledContents(true);
            ui->bit7->setAlignment(Qt::AlignCenter);
            ui->bit7->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        case 8:
            ui->bit8->setScaledContents(true);
            ui->bit8->setAlignment(Qt::AlignCenter);
            ui->bit8->setPixmap(QPixmap::fromImage(bitplaneImage));
            break;
        default:
            break;
        }
    }
    else
    {
        QStringList s = path.split('/');
        QString fileName = s.at(s.size()-1), lastpath = "";
        for(int i=0;i<s.size()-1;i++)
        {
            lastpath += s.at(i) + "/";
        }
        qDebug() << lastpath << fileName;

        QString savePath = lastpath+"bitplane"+char(num+'0')+"_"+fileName;
        QMessageBox::information(NULL, tr("Path"), tr("Your images saved at ") + savePath);
        //qDebug() << savePath;

        bitplaneImage.save(savePath);
    }
    return ;
}

void MainWindow::on_bitplane_save_clicked()
{
    mysave_bitplane();
}

void MainWindow::create_histogram_info(double *image_gray)
{
    int w = myImage.width(), h = myImage.height();
    int pixelNum = w*h, mid_gray=0, image_gray_num[256]={0};
    double average_gary=0, stdev=0;
    qDebug() << "pixelNum: " << pixelNum;
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor gray = QColor(pixel);
            int r = gray.red();
            image_gray_num[r] += 1;
            average_gary += r;
        }
    }
    average_gary /= pixelNum;
    qDebug() << "average_gray: " << average_gary;

    int num=0;
    for(int i=0;i<256;i++)
    {
        num += image_gray_num[i];
        //qDebug() << "num : " << num << "image_gray_num[i]: " << image_gray_num[i];
        if( mid_gray == 0 && num >= pixelNum/2 )
            mid_gray = i;
        stdev += pow(i,2)*image_gray_num[i];
    }
    qDebug() << "mid_gray: " << mid_gray;
    stdev = sqrt((stdev/pixelNum));
    qDebug() << "stdev: " << stdev;

    for(int i=0;i<256;i++) image_gray[i] = (float)image_gray_num[i]/pixelNum;

    qDebug() << ui->histogram_info->rowCount() << ui->histogram_info->columnCount();
    ui->histogram_info->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->histogram_info->setItem(0,0,new QTableWidgetItem(QString("%1").arg(pixelNum)));
    ui->histogram_info->setItem(0,1,new QTableWidgetItem(QString("%1").arg(average_gary)));
    ui->histogram_info->setItem(0,2,new QTableWidgetItem(QString("%1").arg(mid_gray)));
    ui->histogram_info->setItem(0,3,new QTableWidgetItem(QString("%1").arg(stdev)));

    int best_gray = interation_gary(average_gary);
    ui->threshold->setPlaceholderText(QString("最佳阀值：%1").arg(best_gray));
    ui->threshold->setText(QString("%1").arg(best_gray));
    return ;
}

void MainWindow::create_histogram_paint(double *image_gray)
{
    QVector<double> x(256,0.0), y(256,0.0);
    double max_y=0.0;
    for(int i=0;i<256;i++)
    {
        //qDebug() << "image_gray[i]" << image_gray[i];
        x[i] = i;
        y[i] = image_gray[i];
    }

    for(int i=0;i<256;i++)
    {
        max_y = max_y > y[i] ? max_y : y[i];
    }

    ui->histogram_paint->xAxis->setLabel("灰度值");
    ui->histogram_paint->xAxis->setRange(0,255);
    ui->histogram_paint->yAxis->setLabel("灰度值占比");
    ui->histogram_paint->yAxis->setRange(0,max_y);

    ui->histogram_paint->graph(0)->setData(x,y);
    ui->histogram_paint->replot();// important!!!
    return ;
}

void MainWindow::create_histogram()
{
    double image_gray[256];
    create_histogram_info(image_gray);
    create_histogram_paint(image_gray);

    return ;
}

void MainWindow::on_threshold_update_clicked()
{
    int threshold_level = ui->threshold->text().toInt();
    if( threshold_level == 256 )
    {
        ui->histogram_page->setPixmap(QPixmap::fromImage(myImage));
        return ;
    }
    QImage iGray(imageWidth,imageHeight,myImage.format());

    for(int i=0;i<imageWidth;i++)
    {
        for(int j=0;j<imageHeight;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor clo = QColor(pixel);
            int r = clo.red();
            if( r > threshold_level ) iGray.setPixel(i,j,qRgb(255,255,255));
            else iGray.setPixel(i,j,qRgb(0,0,0));
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    ui->histogram_page->setPixmap(QPixmap::fromImage(iGray));
    newImage = iGray;
    return ;
}
