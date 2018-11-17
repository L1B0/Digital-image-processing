#include "mywidget.h"

mywidget::mywidget(QWidget *parent):
    QWidget(parent)
{

    QAction *saveMenu = new QAction(this);
    saveMenu->setText("保存");
    QAction *apply = new QAction(this);
    apply->setText("应用");
    QAction *compress = new QAction(this);
    compress->setText("压缩");
    QAction *houghLine = new QAction(this);
    houghLine->setText("直线检测");
    QAction *marginalClo = new QAction(this);
    marginalClo->setText("边缘闭合 ");
    QList<QAction*> actionList;
    actionList<<saveMenu<<apply<<houghLine<<marginalClo<<compress;

    this->addActions(actionList);

    QMenu *compressChild = new QMenu();
    QAction *huffman = new QAction(compressChild);
    huffman->setText("Huffman编码");
    QAction *runLength = new QAction(compressChild);
    runLength->setText("游程编码");
    QList<QAction*> compressActionList;
    compressActionList<<huffman<<runLength;
    compressChild->addActions(compressActionList);

    compress->setMenu(compressChild);

    connect(saveMenu,SIGNAL(triggered(bool)),this,SLOT(saveSlotClicked()));
    connect(apply,SIGNAL(triggered(bool)),this,SLOT(applySlotClicked()));
    connect(houghLine,SIGNAL(triggered(bool)),this,SLOT(houghSlotClicked()));
    connect(marginalClo,SIGNAL(triggered(bool)),this,SLOT(marginalClosureSlotClicked()));
    connect(huffman,SIGNAL(triggered(bool)),this,SLOT(huffmanCodingSlotClicked()));
    connect(runLength,SIGNAL(triggered(bool)),this,SLOT(runLengthCodingSlotClicked()));
}

void mywidget::saveSlotClicked()
{
    //QMessageBox::information(NULL,QString("Save"),QString("Test"));
    qDebug() << this->objectName();

    QString fileName = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Image Files(*.jpg *.png *bmp)"));
    qDebug() << fileName;
    if(fileName.length() == 0)
    {
        QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }
    else
    {
        QMessageBox::information(NULL, tr("Path"), tr("You selected ") + fileName);
        this->saveImage.save(fileName);
    }
    return ;
}

void mywidget::applySlotClicked()
{
    x->apply(saveImage);
    return ;
}


void mywidget::huffmanCodingSlotClicked()
{
    double image_gray[256];
    x->createHistogramInfo(saveImage,image_gray,false);

    huffmanCoding h(image_gray,256,true);

    QStringList s = path.split('/');
    QString fileName = s.at(s.size()-1), lastpath = "";
    for(int i=0;i<s.size()-1;i++)
    {
        lastpath += s.at(i) + "/";
    }
    QString spath = lastpath+fileName.split('.').at(0)+".huff";
    char *savepath;
    QByteArray ba = spath.toLatin1();
    savepath = ba.data();
    qDebug() << savepath;

    ofstream ofile;
    ofile.open(savepath);

    ofile<< saveImage.width() << " " << saveImage.height() << endl;

    /*gray_huffmanTree*/
    for(int i=0;i<256*2;i++)
    {
        ofile << i << " " << h.htree[i].left << " " << h.htree[i].right << " " << h.htree[i].parent << endl;
    }
    ofile.close();/*stop*/
    FILE *f = fopen(savepath,"ab");
    qDebug() << f;
    /*imageHuffmanCode*/
    int gray = 0, grayBitNum=0;
    unsigned char x;
    for(int i=0;i<saveImage.width();i++)
    {
        for(int j=0;j<saveImage.height();j++)
        {
            int g = QColor(saveImage.pixel(i,j)).red();
            char *hc = h.hcode[g];
            /*binary2int*/
            for(int k=0;k<strlen(hc);k++) gray = ((hc[k]-'0')<<grayBitNum) + gray, grayBitNum ++;
            //if(i==0&&j<10) qDebug() << hc;
            while( grayBitNum >= 8 )
            {
                x = gray%256;
                fwrite(&x,1,1,f);
                gray = (gray >> 8);
                grayBitNum -= 8;
            }
        }
    }
    /*the last one*/
    if( gray != 0 )
    {
        x = gray;
        fwrite(&x,1,1,f);
    }
    fclose(f);

    int oriSize,nowSize;

    //original file
    ba = path.toLatin1();
    char *ppath = ba.data();
    FILE *ff = fopen(ppath,"r");
    fseek(ff,0,SEEK_END);
    oriSize = ftell(ff);
    fclose(ff);
    //compressed file
    ff = fopen(savepath,"r");
    fseek(ff,0,SEEK_END);
    nowSize = ftell(ff);
    fclose(ff);

    float compress = (float)nowSize/oriSize;
    QMessageBox::information(NULL, tr("huffmanCode"),QString("压缩率为%1").arg(compress));
    QMessageBox::information(NULL, tr("Path"),tr("压缩文件保存在原图所在文件夹下"));
    return ;
}

void mywidget::runLengthCodingSlotClicked()
{
    //QMessageBox::information(NULL, tr("runLength"),tr("hi"));
    //get savepath
    QStringList s = path.split('/');
    QString fileName = s.at(s.size()-1), lastpath = "";
    for(int i=0;i<s.size()-1;i++)
    {
        lastpath += s.at(i) + "/";
    }
    QString spath = lastpath+fileName.split('.').at(0)+".runlen";
    char *savepath;
    QByteArray ba = spath.toLatin1();
    savepath = ba.data();
    qDebug() << savepath;

    FILE *f = fopen(savepath,"ab");
    int width = saveImage.width(), height = saveImage.height();
    fwrite(&width,sizeof(width),1,f);
    fwrite(&height,sizeof(height),1,f);

    //compress image data
    int pixelNum=1,repeatTimes=1;
    unsigned char nowGray,lastGray;
    lastGray = QColor(saveImage.pixel(0,0)).red();
    qDebug() << width << height;
    while( pixelNum < width*height )
    {
        nowGray = QColor(saveImage.pixel(pixelNum/height,pixelNum%height)).red();
        if( nowGray == lastGray ) repeatTimes ++;
        else
        {
            while( repeatTimes > 0 )
            {
                unsigned char t = repeatTimes%256;
                fwrite(&t,1,1,f);
                fwrite(&lastGray,1,1,f);
                repeatTimes /= 256;
            }
            lastGray = nowGray;
            repeatTimes = 1;
        }
        pixelNum++;
    }
    //The last one
    while( repeatTimes > 0 )
    {
        unsigned char t = repeatTimes%256;
        fwrite(&t,1,1,f);
        fwrite(&lastGray,1,1,f);
        repeatTimes /= 256;
    }
    fclose(f);

    int oriSize,nowSize;
    //original file
    ba = path.toLatin1();
    char *ppath = ba.data();
    FILE *ff = fopen(ppath,"r");
    fseek(ff,0,SEEK_END);
    oriSize = ftell(ff);
    fclose(ff);
    //compressed file
    ff = fopen(savepath,"r");
    fseek(ff,0,SEEK_END);
    nowSize = ftell(ff);
    fclose(ff);

    float compress = (float)nowSize/oriSize;
    QMessageBox::information(NULL, tr("huffmanCode"),QString("压缩率为%1").arg(compress));
    QMessageBox::information(NULL, tr("Path"),tr("压缩文件保存在原图所在文件夹下"));
    return ;
}

void mywidget::marginalClosureSlotClicked()
{
    int width = saveImage.width(), height = saveImage.height();
    int eight[8][2] = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1} };
    int sixteen[16][2] = { {-2,-2},{-2,-1},{-2,0},{-2,1},{-2,2},{-1,-2},{-1,2},{0,-2},{0,2},{1,-2},{1,2},{2,-2},{2,-1},{2,0},{2,1},{2,2} };
    QImage *newImage = new QImage(width,height,QImage::Format_Indexed8);
    initImage(newImage);

    for(int i=0;i<width;i++)
    {
        for(int j=0;j<height;j++)
            newImage->setPixel(i,j,QColor(saveImage.pixel(i,j)).red());
    }

    for(int i=1;i<width-1;i++)
    {
        for(int j=1;j<height-1;j++)
        {
            int num=1;
            for(int k=0;k<8;k++)
            {
                int x = i+eight[k][0], y = j+eight[k][1];
                if( x < 0 || x >= width || y < 0 || y >= height ) continue;
                int nowGray = QColor(saveImage.pixel(x,y)).red();
                if( nowGray != 0 ) num++;
            }
            if( num != 1 ) continue;
            for(int k=0;k<16;k++)
            {
                int x = i+sixteen[k][0], y = j+sixteen[k][1];
                if( x < 0 || x >= width || y < 0 || y >= height ) continue;

                int nowGray = QColor(saveImage.pixel(x,y)).red();
                if( nowGray != 0 ) newImage->setPixel(i+sixteen[k][0]/2,j+sixteen[k][1]/2,255);
            }
        }
    }
    saveImage = *newImage;
    QPalette pale;
    pale.setBrush(this->backgroundRole(),QBrush(saveImage));
    this->setPalette(pale);
    return ;
}

void mywidget::houghSlotClicked()
{
    QImage houghImage(saveImage.width(),saveImage.height(),QImage::Format_RGB32);
    for(int i=0;i<saveImage.width();i++)
    {
        for(int j=0;j<saveImage.height();j++)
        {
            int gray = QColor(saveImage.pixel(i,j)).red();
            houghImage.setPixel(i,j,qRgb(gray,gray,gray)); //复制原图
        }
    }

    int width = saveImage.width(), height = saveImage.height(), ro = (int)sqrt(width*width+height*height);
    int doublero = ro*2, maxtheta = 180, threshold=100;
    double thetaStep = M_PI/maxtheta;
    int centerX = width/2, centerY = height/2; //中心点

    //打表0-180度的正余弦值
    double *mysin = new double[maxtheta];
    double *mycos = new double[maxtheta];
    for(int i=0;i<maxtheta;i++)
    {
        double nowTheta = i * thetaStep;
        mysin[i] = sin(nowTheta);
        mycos[i] = cos(nowTheta);
    }
    //二维直方图
    int **hist = new int* [doublero];
    for(int i=0;i<doublero;i++)
        hist[i] = new int[maxtheta];
    for(int i=0;i<doublero;i++)
    {
        for(int j=0;j<maxtheta;j++)
            hist[i][j]=0;
    }
    //
    for(int i=0;i<width;i++)
    {
        for(int j=0;j<height;j++)
        {
            int gray = QColor(saveImage.pixel(i,j)).red();
            if( gray ==0 ) continue;
            for(int k=0;k<maxtheta;k++)
            {
                int nowRo = (int)((i-centerX)*mycos[k]+(j-centerY)*mysin[k]);
                nowRo += ro;
                //qDebug() << doublero << nowRo;
                hist[nowRo][k] ++;
            }
        }
    }
    //int m4x = 0;
    //qDebug() << "4";
    //for(int i=0;i<doublero;i++)
    //{
    //    for(int j=0;j<maxtheta;j++)
    //    {
    //        //qDebug() << hist[i][j];
    //        if( m4x < hist[i][j] ) m4x = hist[i][j];
    //    }
    //}
    int angle[1000000],roo[1000000],num=0;
    for(int i=0;i<doublero;i++)
    {
        for(int j=0;j<maxtheta;j++)
        {
            //qDebug() << i << j << hist[i][j];
            if(hist[i][j] > threshold )
                angle[num] = j, roo[num++] = i;
        }
    }
    //qDebug() << num;
    for(int k=0;k<num;k++)
    {
        int resTheta = angle[k];
        for(int i=0;i<saveImage.width();i++)
        {
            for(int j=0;j<saveImage.height();j++)
            {
                int rho = (int)((i-centerX)*mycos[resTheta]+(j-centerY)*mysin[resTheta]);
                rho += ro;
                if(QColor(saveImage.pixel(i,j)).red() != 0 && rho == roo[k])
                    houghImage.setPixel(i,j,qRgb(0,0,0xff));   //在直线上的点设为蓝色
            }
        }
    }
    saveImage = houghImage;
    QPalette pale;
    pale.setBrush(this->backgroundRole(),QBrush(saveImage));
    this->setPalette(pale);
    return ;
}
