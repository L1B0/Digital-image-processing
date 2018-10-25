#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //文件打开
    QMenu *file = menuBar()->addMenu(tr("&文件"));

    openAction = new QAction(tr("&打开"), this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("Open a file."));
    file->addAction(openAction);
    connect(openAction, SIGNAL(triggered()), this, SLOT(open()));

    //saveAction = new QAction(tr("&Save"), this);
    //saveAction->setShortcut(QKeySequence::Save);
    //saveAction->setStatusTip(tr("Save a file."));
    //file->addAction(saveAction);
    //connect(saveAction, SIGNAL(triggered()), this, SLOT(save()));

    ui->width->setPlaceholderText(tr("宽度"));
    ui->length->setPlaceholderText(tr("高度"));
    ui->gray_level->setPlaceholderText(tr("灰度级"));

    //tabwidget自定义样式
    ui->tabWidget->tabBar()->setStyle(new CustomTabStyle);
    ui->tabWidget->setCurrentIndex(0);
    ui->point_type->tabBar()->setStyle(new CustomTabStyle);
    ui->point_type->setCurrentIndex(0);
    ui->gray_hist->tabBar()->setStyle(new CustomTabStyle);
    ui->gray_hist->setCurrentIndex(0);
    ui->point_type->tabBar()->setStyle(new CustomTabStyle);
    ui->point_type->setCurrentIndex(0);
    ui->smooth_type->tabBar()->setStyle(new CustomTabStyle);
    ui->smooth_type->setCurrentIndex(0);

    //为画图标类添加段落
    ui->histogram_paint->addGraph();
    ui->sampling_paint->addGraph();
    ui->gray_paint->addGraph();
    ui->line_ori_paint->addGraph();
    ui->line_trans_paint->addGraph();
    ui->nline_ori1_paint->addGraph();
    ui->nline_trans1_paint->addGraph();
    ui->nline_ori2_paint->addGraph();
    ui->nline_trans2_paint->addGraph();
    ui->gray_bal_paint->addGraph();
    ui->average_paint->addGraph();
    ui->mid_paint->addGraph();
    ui->neighbor_paint->addGraph();
    ui->sharpen_paint->addGraph();

    //添加滑动条
    QScrollArea *original_scrollarea = new QScrollArea(ui->original);
    original_scrollarea->setGeometry(QRect(20,30,1081,751));
    original_scrollarea->setWidget(ui->original_page);
    QScrollArea *scaling_scrollarea = new QScrollArea(ui->scaling);
    scaling_scrollarea->setGeometry(QRect(10, 10, 525, 537));
    scaling_scrollarea->setWidget(ui->scaling_page);

    QScrollArea *scaling_scrollarea_2 = new QScrollArea(ui->scaling);
    scaling_scrollarea_2->setGeometry(QRect(545, 10, 525, 537));
    scaling_scrollarea_2->setWidget(ui->scaling_page_2);

    QScrollArea *sampling_scrollArea = new QScrollArea(ui->sampling_rate);
    sampling_scrollArea->setGeometry(QRect(30, 70, 511, 691));
    sampling_scrollArea->setWidget(ui->sampling_page);
    QScrollArea *gray_scrollArea = new QScrollArea(ui->gray);
    gray_scrollArea->setGeometry(QRect(30, 60, 511, 711));
    gray_scrollArea->setWidget(ui->gray_page);
    QScrollArea *histogram_scrollArea = new QScrollArea(ui->gray_count);
    histogram_scrollArea->setGeometry(QRect(20, 80, 491, 621));
    histogram_scrollArea->setWidget(ui->histogram_page);
    QScrollArea *gray_bal_scrollArea = new QScrollArea(ui->gray_balance);
    gray_bal_scrollArea->setGeometry(QRect(25, 17, 491, 661));
    gray_bal_scrollArea->setWidget(ui->gray_bal_image);
    QScrollArea *line_scaling_scrollarea = new QScrollArea(ui->line_trans);
    line_scaling_scrollarea->setGeometry(QRect(30, 20, 491, 341));
    line_scaling_scrollarea->setWidget(ui->line_ori_image);
    QScrollArea *line_trans_scrollArea = new QScrollArea(ui->line_trans);
    line_trans_scrollArea->setGeometry(QRect(29, 399, 491, 311));
    line_trans_scrollArea->setWidget(ui->line_trans_image);
    QScrollArea *nline_ori1_scrollArea = new QScrollArea(ui->nline_trans1);
    nline_ori1_scrollArea->setGeometry(QRect(30, 20, 491, 331));
    nline_ori1_scrollArea->setWidget(ui->nline_ori1_image);
    QScrollArea *nline_trans1_scrollArea = new QScrollArea(ui->nline_trans1);
    nline_trans1_scrollArea->setGeometry(QRect(30, 390, 491, 321));
    nline_trans1_scrollArea->setWidget(ui->nline_trans1_image);
    QScrollArea *nline_ori2_scrollArea = new QScrollArea(ui->nline_trans2);
    nline_ori2_scrollArea->setGeometry(QRect(29, 19, 501, 341));
    nline_ori2_scrollArea->setWidget(ui->nline_ori2_image);
    QScrollArea *nline_trans2_scrollArea = new QScrollArea(ui->nline_trans2);
    nline_trans2_scrollArea->setGeometry(QRect(28, 397, 501, 311));
    nline_trans2_scrollArea->setWidget(ui->nline_trans2_image);
    QScrollArea *average_scrollarea = new QScrollArea(ui->average_trans);
    average_scrollarea->setGeometry(QRect(30,70,531,671));
    average_scrollarea->setWidget(ui->average_page);
    QScrollArea *mid_scrollarea = new QScrollArea(ui->mid_trans);
    mid_scrollarea->setGeometry(QRect(30,70,531,671));
    mid_scrollarea->setWidget(ui->mid_page);
    QScrollArea *neighbor_scrollarea = new QScrollArea(ui->neighbor_trans);
    neighbor_scrollarea->setGeometry(QRect(30,70,531,671));
    neighbor_scrollarea->setWidget(ui->neighbor_page);
    QScrollArea *sharpen_scrollarea = new QScrollArea(ui->sharpen);
    sharpen_scrollarea->setGeometry(QRect(30,60,571,731));
    sharpen_scrollarea->setWidget(ui->sharpen_page);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//将输入清除
void MainWindow::clearAllText()
{
    QList<QLineEdit*> allLineEdit = ui->centralWidget->findChildren<QLineEdit*>();
    for(int i=0;i<allLineEdit.length();i++)
    {
        allLineEdit[i]->clear();
    }
    return ;
}

//打开图片
void MainWindow::open()
{
    clearAllText();
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

        if( myImage.format() == QImage::Format_ARGB32 || myImage.format() == QImage::Format_RGB32 )
        {
            QMessageBox rgb2gray(QMessageBox::Warning,"Image","该图像类型为彩色图，要转为灰度图吗？(本系统不支持对彩图进行处理)",QMessageBox::Yes|QMessageBox::No,NULL);
            if( rgb2gray.exec() == QMessageBox::Yes )
            {
                myImage = rgb2grayImage(myImage);
            }
        }

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
        pale.setBrush(this->backgroundRole(),QBrush(myImage));
        ui->original_page->setPalette(pale);
        ui->scaling_page->setPalette(pale);
        ui->scaling_page_2->setPalette(pale);
        ui->sampling_page->setPalette(pale);
        ui->gray_page->setPalette(pale);
        ui->histogram_page->setPalette(pale);
        ui->line_ori_image->setPalette(pale);
        ui->nline_ori1_image->setPalette(pale);
        ui->nline_ori2_image->setPalette(pale);
        ui->average_page->setPalette(pale);
        ui->mid_page->setPalette(pale);
        ui->neighbor_page->setPalette(pale);
        ui->sharpen_page->setPalette(pale);

        myShowBitplane();
        createHistogram(ui->histogram_paint, myImage, true);
        createHistogram(ui->sampling_paint, myImage, false);
        createHistogram(ui->gray_paint, myImage, false);
        createHistogram(ui->line_ori_paint, myImage, false);
        createHistogram(ui->nline_ori1_paint, myImage, false);
        createHistogram(ui->nline_ori2_paint, myImage, false);
        createHistogram(ui->average_paint, myImage, false);
        createHistogram(ui->mid_paint, myImage, false);
        createHistogram(ui->neighbor_paint, myImage, false);
        createHistogram(ui->sharpen_paint, myImage, false);

        histogramEqualization(myImage); // Histogram equalization
        ui->tabWidget->setCurrentIndex(0);
        ui->gray_hist->setCurrentIndex(0);
        ui->smooth_type->setCurrentIndex(0);

        //滚动条
        ui->original_page->resize(QSize(imageWidth,imageHeight));
        ui->scaling_page->resize(QSize(imageWidth,imageHeight));
        ui->scaling_page_2->resize(QSize(imageWidth,imageHeight));
        ui->histogram_page->resize(QSize(imageWidth,imageHeight));
        ui->sampling_page->resize(QSize(imageWidth,imageHeight));
        ui->gray_page->resize(QSize(imageWidth,imageHeight));
        ui->gray_bal_image->resize(QSize(imageWidth,imageHeight));
        ui->line_ori_image->resize(QSize(imageWidth,imageHeight));
        ui->line_trans_image->resize(QSize(imageWidth,imageHeight));
        ui->nline_ori1_image->resize(QSize(imageWidth,imageHeight));
        ui->nline_trans1_image->resize(QSize(imageWidth,imageHeight));
        ui->nline_ori2_image->resize(QSize(imageWidth,imageHeight));
        ui->nline_trans2_image->resize(QSize(imageWidth,imageHeight));
        ui->average_page->resize(QSize(imageWidth,imageHeight));
        ui->mid_page->resize(QSize(imageWidth,imageHeight));
        ui->neighbor_page->resize(QSize(imageWidth,imageHeight));
        ui->sharpen_page->resize(QSize(imageWidth,imageHeight));

        //初始化
        ui->original_page->saveImage = myImage;
        ui->scaling_page->saveImage = myImage;
        ui->scaling_page_2->saveImage = myImage;
        ui->histogram_page->saveImage = myImage;
        ui->sampling_page->saveImage = myImage;
        ui->gray_page->saveImage = myImage;
        ui->gray_bal_image->saveImage = myImage;
        ui->line_ori_image->saveImage = myImage;
        ui->line_trans_image->saveImage = myImage;
        ui->nline_ori1_image->saveImage = myImage;
        ui->nline_trans1_image->saveImage = myImage;
        ui->nline_ori2_image->saveImage = myImage;
        ui->nline_trans2_image->saveImage = myImage;
        ui->average_page->saveImage = myImage;
        ui->mid_page->saveImage = myImage;
        ui->neighbor_page->saveImage = myImage;
        ui->sharpen_page->saveImage = myImage;
		
		//滚动条初始化
        ui->nearest_level->setText(QString("缩放倍数: %1").arg(0));
        ui->bilinear_level->setText(QString("缩放倍数: %1").arg(0));
        ui->nearest_horizontalSlider->setValue(0);
        ui->bilinear_horizontalSlider->setValue(0);
	}
    return ;
}

//输入是否合法
bool MainWindow::checkInput(QLineEdit *labeltest)
{
    if( labeltest->text() == "" )
    {
        QMessageBox::information(NULL,tr("Warning"),tr("输入为空!"));
        labeltest->clear();
        return false;
    }
    if(!isDigitString(labeltest->text().toStdString().c_str()))
    {
        QMessageBox::information(NULL,tr("Warning"),tr("请输入数字!"));
        labeltest->clear();
        return false;
    }
    return true;
}

//采样率变换
void MainWindow::on_sampling_clicked()
{
    //QMessageBox::information(NULL, tr("Path"), tr("You selected ") + path);
    if( !checkInput(ui->width) || !checkInput(ui->length) )
        return ;

    int imageNewWidth = ui->width->text().toInt(), imageNewHeight = ui->length->text().toInt();
    qDebug() << "newWidth: " << imageNewWidth << "newLength: " << imageNewHeight;

    //采样率不必整除于原来的采样率
    int wspace = imageWidth%imageNewWidth == 0 ? imageWidth/imageNewWidth : imageWidth/imageNewWidth+1;
    int hspace = imageHeight%imageNewHeight == 0 ? imageHeight/imageNewHeight : imageHeight/imageNewHeight+1;
    if(imageNewWidth <= 0 || imageNewWidth > imageWidth || imageNewHeight <= 0 || imageNewHeight > imageHeight) return ;
    qDebug() << imageWidth << imageHeight << wspace << hspace;

    QImage *iGray = new QImage(imageWidth,imageHeight,myImage.format());
    initImage(iGray);
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
                    {
                        if(iGray->format() == QImage::Format_Indexed8)
                            iGray->setPixel(i*wspace+ii,j*hspace+jj,QColor(pixel).red());
                        else
                            iGray->setPixel(i*wspace+ii,j*hspace+jj,pixel);
                    }
                }
            }
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    pale.setBrush(this->backgroundRole(),QBrush(*iGray));
    ui->sampling_page->setPalette(pale);
    ui->sampling_page->saveImage = *iGray;

    createHistogram(ui->sampling_paint, ui->sampling_page->saveImage, false);

    return ;
}

//灰度级变换
void MainWindow::on_gray_determine_clicked()
{
    if( !checkInput(ui->gray_level) ) return ;

    int level_gray = ui->gray_level->text().toInt();
    if(level_gray <= 0 || level_gray > 256) return ;
    qDebug() << "level_gray: " << level_gray;

    QImage *iGray = new QImage(imageWidth,imageHeight,myImage.format());
    initImage(iGray);
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
            if(iGray->format() == QImage::Format_Indexed8)
                iGray->setPixel(i,j,r);
            else
                iGray->setPixel(i,j,newpixel);
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    pale.setBrush(this->backgroundRole(),QBrush(*iGray));
    ui->gray_page->setPalette(pale);
    ui->gray_page->saveImage = *iGray;

    createHistogram(ui->gray_paint, ui->gray_page->saveImage, false);
    return ;
}

//保存8幅位平面图
void MainWindow::mySaveBitplane()
{
    for(int i=1;i<=8;i++)
        myShow(i,'a');
    return ;
}

//显示8幅位平面图
void MainWindow::myShowBitplane()
{
    for(int i=1;i<=8;i++)
        myShow(i,'h');
    return ;
}

//显示1幅位平面图
void MainWindow::myShow(int num, char flag)
{
    int w = myImage.width(), h = myImage.height();
    //qDebug() << "myshow: " << "width = " << w << "height = " << h;
    QImage *bitplaneImage = new QImage(w,h,myImage.format());
    initImage(bitplaneImage);
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor gray = QColor(pixel);
            int r = gray.red();
            r = getBit(r,num-1);
            //qDebug() << "r=" << r << "g=" << g << "b=" << b;
            QRgb newpixel = qRgb(r,r,r);
            //qDebug() << "myshow: i = " << i << "j = " << j;
            if(bitplaneImage->format() == QImage::Format_Indexed8)
                bitplaneImage->setPixel(i,j,r);
            else
                bitplaneImage->setPixel(i,j,newpixel);
        }
    }

    if( flag == 'h' )
    {
        switch (num) {
        case 1:
            ui->bit1->setScaledContents(true);
            ui->bit1->setAlignment(Qt::AlignCenter);
            ui->bit1->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 2:
            ui->bit2->setScaledContents(true);
            ui->bit2->setAlignment(Qt::AlignCenter);
            ui->bit2->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 3:
            ui->bit3->setScaledContents(true);
            ui->bit3->setAlignment(Qt::AlignCenter);
            ui->bit3->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 4:
            ui->bit4->setScaledContents(true);
            ui->bit4->setAlignment(Qt::AlignCenter);
            ui->bit4->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 5:
            ui->bit5->setScaledContents(true);
            ui->bit5->setAlignment(Qt::AlignCenter);
            ui->bit5->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 6:
            ui->bit6->setScaledContents(true);
            ui->bit6->setAlignment(Qt::AlignCenter);
            ui->bit6->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 7:
            ui->bit7->setScaledContents(true);
            ui->bit7->setAlignment(Qt::AlignCenter);
            ui->bit7->setPixmap(QPixmap::fromImage(*bitplaneImage));
            break;
        case 8:
            ui->bit8->setScaledContents(true);
            ui->bit8->setAlignment(Qt::AlignCenter);
            ui->bit8->setPixmap(QPixmap::fromImage(*bitplaneImage));
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

        bitplaneImage->save(savePath);
    }
    return ;
}

//保存8幅位平面图
void MainWindow::on_bitplane_save_clicked()
{
    mySaveBitplane();
}

//计算灰度信息-均值等
void MainWindow::createHistogramInfo(QImage nowImage, double *image_gray, bool flag)
{
    int w = nowImage.width(), h = nowImage.height();
    int pixelNum = w*h, mid_gray=0, image_gray_num[256]={0};
    double average_gary=0, stdev=0;
    qDebug() << "pixelNum: " << pixelNum;
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            QRgb pixel = nowImage.pixel(i,j);
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

    //Not at histogram_page
    if( !flag ) return ;

    qDebug() << ui->histogram_info->rowCount() << ui->histogram_info->columnCount();
    ui->histogram_info->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->histogram_info->setItem(0,0,new QTableWidgetItem(QString("%1").arg(pixelNum)));
    ui->histogram_info->setItem(0,1,new QTableWidgetItem(QString("%1").arg(average_gary)));
    ui->histogram_info->setItem(0,2,new QTableWidgetItem(QString("%1").arg(mid_gray)));
    ui->histogram_info->setItem(0,3,new QTableWidgetItem(QString("%1").arg(stdev)));

    int best_gray = interationGary(average_gary);
    ui->threshold->setPlaceholderText(QString("最佳阀值：%1").arg(best_gray));
    ui->threshold->setText(QString("%1").arg(best_gray));
    return ;
}

//画直方图
void MainWindow::createHistogramPaint(QCustomPlot *nowlabel, double *image_gray)
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

    nowlabel->xAxis->setLabel("灰度值");
    nowlabel->xAxis->setRange(0,255);
    nowlabel->yAxis->setLabel("灰度值占比");
    nowlabel->yAxis->setRange(0,max_y);

    nowlabel->graph(0)->setData(x,y);
    nowlabel->replot();// important!!!
    return ;
}

//创建直方图
void MainWindow::createHistogram(QCustomPlot *nowlabel, QImage nowImage, bool flag)
{
    double image_gray[256];
    createHistogramInfo(nowImage, image_gray, flag);
    createHistogramPaint(nowlabel, image_gray);

    return ;
}

//灰度变换-阀值
void MainWindow::on_threshold_update_clicked()
{
    if( !checkInput(ui->threshold) ) return ;

    int threshold_level = ui->threshold->text().toInt();
    if( threshold_level == 256 )
    {
        pale.setBrush(this->backgroundRole(),QBrush(myImage));
        ui->histogram_page->setPalette(pale);
        return ;
    }
    QImage *iGray = new QImage(imageWidth,imageHeight,myImage.format());
    initImage(iGray);
    for(int i=0;i<imageWidth;i++)
    {
        for(int j=0;j<imageHeight;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor clo = QColor(pixel);
            int r = clo.red();
            if( r > threshold_level )
                if(iGray->format() == QImage::Format_Indexed8)
                    iGray->setPixel(i,j,255);
                else
                    iGray->setPixel(i,j,qRgb(255,255,255));
            else if(iGray->format() == QImage::Format_Indexed8)
                    iGray->setPixel(i,j,0);
            else
                iGray->setPixel(i,j,qRgb(0,0,0));
        }
    }
    //iGray.save("/home/l1b0/Desktop/gray","JPG",-1);
    pale.setBrush(this->backgroundRole(),QBrush(*iGray));
    ui->histogram_page->setPalette(pale);
    ui->histogram_page->saveImage = *iGray;
    return ;
}

//线性变换
void MainWindow::on_line_push_clicked()
{
    ui->line_trans_image->saveImage = *(pointCalc(1));
}

//非线性变换1
void MainWindow::on_nline_push1_clicked()
{
    ui->nline_trans1_image->saveImage = *(pointCalc(2));
}

//非线性变换2
void MainWindow::on_nline_push2_clicked()
{
    ui->nline_trans2_image->saveImage = *(pointCalc(3));
}

//点运算-改变对应页面的结果
QImage* MainWindow::pointCalc(int pointType)
{
    QWidget *trans_image;
    QCustomPlot *trans_paint;
    float a,b,c;

    if(pointType == 1)
    {
        trans_image = ui->line_trans_image;
        trans_paint = ui->line_trans_paint;
        a = ui->line_a1->text().toFloat();
        b = ui->line_b1->text().toFloat();
    }
    else if(pointType == 2)
    {
        c = ui->nline_c1->text().toFloat();
        trans_image = ui->nline_trans1_image;
        trans_paint = ui->nline_trans1_paint;
    }
    else
    {
        a = ui->nline_a2->text().toFloat();
        b = ui->nline_b2->text().toFloat();
        trans_image = ui->nline_trans2_image;
        trans_paint = ui->nline_trans2_paint;
    }

    QImage *iGray = new QImage(imageWidth,imageHeight,myImage.format());
    initImage(iGray);
    qDebug() << "trans_image: " << trans_image->objectName();
    qDebug() << "trans_paint: " << trans_paint->objectName();

    for(int i=0;i<imageWidth;i++)
    {
        for(int j=0;j<imageHeight;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor clo = QColor(pixel);
            int r = clo.red(), trans_r;
            if( pointType == 1 )
                trans_r = ((int)(a*(float)r+b)) ;
            else if( pointType == 2 )
                trans_r = (int)(c*log((double)(r+1)));
            else
                trans_r = (int)(a*pow(r,b));
            if(trans_r > 255) trans_r = 255;
            //qDebug() << r << trans_r;
            if(iGray->format() == QImage::Format_Indexed8)
                iGray->setPixel(i,j,trans_r);
            else
                iGray->setPixel(i,j,qRgb(trans_r,trans_r,trans_r));
        }
    }

    pale.setBrush(this->backgroundRole(),QBrush(*iGray));
    trans_image->setPalette(pale);

    createHistogram(trans_paint, *iGray, false);
    qDebug() << "paint finished!";
    return iGray;
}

//灰度直方图均衡
void MainWindow::histogramEqualization(QImage nowImage)
{
    double image_gray[256], sum=0;
    int new_gary[256]={0};

    createHistogramInfo(nowImage,image_gray,false);
    QImage *iGray = new QImage(imageWidth,imageHeight,myImage.format());
    initImage(iGray);
    for(int i=0;i<256;i++)
    {
        sum += image_gray[i];
        new_gary[i] = int(sum*255);
    }
    for(int i=0;i<imageWidth;i++)
    {
        for(int j=0;j<imageHeight;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor clo = QColor(pixel);
            int r = clo.red(), nowgray = new_gary[r];

            if(iGray->format() == QImage::Format_Indexed8)
                iGray->setPixel(i,j,nowgray);
            else
                iGray->setPixel(i,j,qRgb(nowgray,nowgray,nowgray));
        }
    }
    pale.setBrush(this->backgroundRole(),QBrush(*iGray));
    ui->gray_bal_image->setPalette(pale);
    ui->gray_bal_image->saveImage = *iGray;

    createHistogram(ui->gray_bal_paint,ui->gray_bal_image->saveImage,false);
    return ;
}

//最近邻算法缩放
void MainWindow::on_nearest_horizontalSlider_valueChanged(int value)
{
    ui->nearest_level->setText(QString("缩放倍数: %1").arg(value));

    int newWidth, newHeight;
    if(value > 0)
    {
        newWidth = imageWidth*(value+1);
        newHeight = imageHeight*(value+1);
    }
    else if(value < 0)
    {
        newWidth = imageWidth/(1-value);
        newHeight = imageHeight/(1-value);
    }
    else
    {
        newWidth = imageWidth;
        newHeight = imageHeight;
    }
    qDebug() << "width: " << newWidth << "height: " << newHeight;
    //nearestInsert(&newImage, newWidth, newHeight);

    QImage *nowImage = new QImage(newWidth,newHeight,myImage.format());
    initImage(nowImage);
    for(int i=0;i<newWidth;i++)
    {
        for(int j=0;j<newHeight;j++)
        {
            int ori_i = (int)(i*((double)imageWidth/newWidth)), ori_j = (int)(j*((double)imageHeight/newHeight));
            QRgb pixel = myImage.pixel(ori_i,ori_j);
            if(nowImage->format() == QImage::Format_Indexed8)
                nowImage->setPixel(i,j,QColor(pixel).red());
            else
                nowImage->setPixel(i,j,pixel);
        }
    }
    ui->scaling_page->saveImage = *nowImage;

    ui->scaling_page->resize(QSize(newWidth,newHeight));
    pale.setBrush(this->backgroundRole(),QBrush(ui->scaling_page->saveImage));
    ui->scaling_page->setPalette(pale);
    return ;
}

//双线性算法缩放
void MainWindow::on_bilinear_horizontalSlider_valueChanged(int value)
{
    ui->bilinear_level->setText(QString("缩放倍数: %1").arg(value));

    int newWidth, newHeight;
    if(value > 0)
    {
        newWidth = imageWidth*(value+1);
        newHeight = imageHeight*(value+1);
    }
    else if(value < 0)
    {
        newWidth = imageWidth/(1-value);
        newHeight = imageHeight/(1-value);
    }
    else
    {
        newWidth = imageWidth;
        newHeight = imageHeight;
    }
    qDebug() << "width: " << newWidth << "height: " << newHeight;

    QImage *nowImage = new QImage(newWidth,newHeight,myImage.format());
    initImage(nowImage);
    for(int i=0;i<newWidth;i++)
    {
        for(int j=0;j<newHeight;j++)
        {
            double newGray,gray1,gray2,gray3,gray4;
            double ori_i = i*((double)imageWidth/newWidth), ori_j = j*((double)imageHeight/newHeight);
            double ori_ii = ori_i-(int)ori_i, ori_jj = ori_j-(int)ori_j;

            gray1 = (double)QColor(myImage.pixel((int)ori_i,(int)ori_j)).red();
            if((int)ori_j+1 == imageHeight && (int)ori_i+1 == imageWidth)
            {
                gray4 = gray3 = gray2;
            }
            else if( (int)ori_j+1 == imageHeight )
            {
                gray3 = (double)QColor(myImage.pixel((int)ori_i+1,(int)ori_j)).red();
                gray4 = gray2 = gray1;
            }
            else if( (int)ori_i+1 == imageWidth )
            {
                gray2 = (double)QColor(myImage.pixel((int)ori_i,(int)ori_j+1)).red();
                gray4 = gray3 = gray1;
            }
            else
            {
                gray2 = (double)QColor(myImage.pixel((int)ori_i,(int)ori_j+1)).red();
                gray3 = (double)QColor(myImage.pixel((int)ori_i+1,(int)ori_j)).red();
                gray4 = (double)QColor(myImage.pixel((int)ori_i+1,(int)ori_j+1)).red();
            }

            newGray = (1-ori_ii)*(1-ori_jj)*(gray1) + (1-ori_ii)*ori_jj*gray2 + (1-ori_jj)*ori_ii*gray3 + ori_ii*ori_jj*gray4;

            if(nowImage->format() == QImage::Format_Indexed8)
                nowImage->setPixel(i,j,newGray);
            else
                nowImage->setPixel(i,j,qRgb(newGray,newGray,newGray));
        }
    }

    ui->scaling_page_2->saveImage = *nowImage;
    ui->scaling_page_2->resize(QSize(newWidth,newHeight));
    pale.setBrush(this->backgroundRole(),QBrush(ui->scaling_page_2->saveImage));
    ui->scaling_page_2->setPalette(pale);

    return ;
}

//最近邻-旋转
void MainWindow::on_nearest_spin_push_clicked()
{
    QMatrix matrix;
    matrix.rotate(90.0);
    ui->scaling_page->saveImage = ui->scaling_page->saveImage.transformed(matrix,Qt::FastTransformation);
    pale.setBrush(this->backgroundRole(),QBrush(ui->scaling_page->saveImage));
    ui->scaling_page->setPalette(pale);
    ui->scaling_page->resize(QSize(ui->scaling_page->saveImage.width(),ui->scaling_page->saveImage.height()));
    return ;
}

//双线性-旋转
void MainWindow::on_bilinear_spin_push_clicked()
{
    QMatrix matrix;
    matrix.rotate(90.0);
    ui->scaling_page_2->saveImage = ui->scaling_page_2->saveImage.transformed(matrix,Qt::FastTransformation);
    pale.setBrush(this->backgroundRole(),QBrush(ui->scaling_page_2->saveImage));
    ui->scaling_page_2->setPalette(pale);
    ui->scaling_page_2->resize(QSize(ui->scaling_page_2->saveImage.width(),ui->scaling_page_2->saveImage.height()));
    return ;
}

//图像平滑-均值
void MainWindow::imageSmoothAverage(int mode)
{
    imageSmooth a;
    QImage* iGray = a.imageSimpleBlur(myImage,mode);
    ui->average_page->saveImage = *iGray;
    pale.setBrush(this->backgroundRole(),QBrush(ui->average_page->saveImage));
    ui->average_page->setPalette(pale);
    createHistogram(ui->average_paint, ui->average_page->saveImage, false);
    return ;
}

//图像平滑-均值-3*3
void MainWindow::on_averageType1_clicked()
{
    imageSmoothAverage(3);
}

//图像平滑-均值-5*5
void MainWindow::on_averageType2_clicked()
{
    imageSmoothAverage(5);
}

//图像平滑-均值-7*7
void MainWindow::on_averageType3_clicked()
{
    imageSmoothAverage(7);
}

//图像平滑-中值
void MainWindow::imageSmoothMid(int mode)
{
    imageSmooth a;
    QImage* iGray = a.imageMdianBlur(myImage,mode);
    ui->mid_page->saveImage = *iGray;
    pale.setBrush(this->backgroundRole(),QBrush(ui->mid_page->saveImage));
    ui->mid_page->setPalette(pale);
    createHistogram(ui->mid_paint, ui->mid_page->saveImage, false);
    return ;
}

//图像平滑-中值-三阶方形
void MainWindow::on_midType1_clicked()
{
    imageSmoothMid(1);
}

//图像平滑-中值-三阶环形
void MainWindow::on_midType2_clicked()
{
    imageSmoothMid(2);
}

//图像平滑-中值-五阶十字形
void MainWindow::on_midType3_clicked()
{
    imageSmoothMid(3);
}

//图像平滑-K邻域
void MainWindow::imageSmoothNeighbor(int mode)
{
    imageSmooth a;
    QImage* iGray = a.imageNeighborBlur(myImage,mode);
    ui->neighbor_page->saveImage = *iGray;
    pale.setBrush(this->backgroundRole(),QBrush(ui->neighbor_page->saveImage));
    ui->neighbor_page->setPalette(pale);
    createHistogram(ui->neighbor_paint, ui->neighbor_page->saveImage, false);
    return ;
}

//图像平滑-K邻域-均值
void MainWindow::on_neighborType1_clicked()
{
    imageSmoothNeighbor(1);
}

//图像平滑-K邻域-中值
void MainWindow::on_neighborType2_clicked()
{
    imageSmoothNeighbor(2);
}

//图像锐化
void MainWindow::imageSharpenTrans(imageSharpen a, int mode, int x, int y)
{
    QImage* iGray;

    if(mode == 1) iGray = a.imageSharpenRoberts(myImage);
    else if(mode == 2) iGray = a.imageSharpenSobel(myImage);
    else if(mode == 3) iGray = a.imageSharpenLapla(myImage);
    else iGray = a.imageSharpenMode(myImage,x,y);
    ui->sharpen_page->saveImage = *iGray;
    pale.setBrush(this->backgroundRole(),QBrush(ui->sharpen_page->saveImage));
    ui->sharpen_page->setPalette(pale);
    createHistogram(ui->sharpen_paint, ui->sharpen_page->saveImage, false);
    return ;
}

//图像锐化-roberts
void MainWindow::on_sharpenRoberts_clicked()
{
    imageSharpen b;
    imageSharpenTrans(b,1,0,0);
}

//图像锐化-sobel
void MainWindow::on_sharpenSobel_clicked()
{
    imageSharpen b;
    imageSharpenTrans(b,2,0,0);
}

//图像锐化-lapla
void MainWindow::on_sharpenLapla_clicked()
{
    imageSharpen b;
    imageSharpenTrans(b,3,0,0);
}

//图像增强-自定义模板
void MainWindow::on_sharpenmode_clicked()
{
    imageSharpenMode ism;
    ism.flag = true;
    ism.setWindowTitle(QString("自定义模板"));
    while(1)
    {
        int f = ism.exec();
        if( f == QDialog::Accepted && ism.flag == true )
        {
            imageSharpenTrans(ism.now,4,ism.x,ism.y);
        }
        if( f == QDialog::Rejected ) return ;
    }

}
