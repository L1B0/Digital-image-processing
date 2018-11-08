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
    QList<QAction*> actionList;
    actionList<<saveMenu<<apply<<compress;

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
            if( i == 27 ) qDebug() << g;
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
