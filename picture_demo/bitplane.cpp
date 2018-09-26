#include "bitplane.h"
#include "ui_bitplane.h"

bitplane::bitplane(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bitplane)
{
    ui->setupUi(this);

    qDebug() << "bitplane";
    QToolBar *tool = new QToolBar(tr("Save"),this);

    saveAction = new QAction(tr("&Save"), this);
    saveAction->setShortcut(QKeySequence::Save);
    saveAction->setStatusTip(tr("Save a file."));
    tool->addAction(saveAction);
    connect(saveAction, SIGNAL(triggered()), this, SLOT(mysave_bitplane()));

    myshow_bitplane();
}

bitplane::~bitplane()
{
    delete ui;
}

void bitplane::mysave_bitplane()
{
    //QMessageBox::information(NULL, tr("Path"), tr("You selected ") + fileName);

    for(int i=1;i<=8;i++)
        myshow(i,'a');
    return ;
}

int bitplane::getBit(int n, int moveBit)
{
    if((n>>moveBit)%2){
        return 255;
    }
    else return 0;
}

void bitplane::myshow_bitplane()
{
    for(int i=1;i<=8;i++)
        myshow(i,'h');
    return ;
}

void bitplane::myshow(int num, char flag)
{
    int w = myImage.width(), h = myImage.height();
    QImage bitplaneImage(w,h,QImage::Format_RGB32);

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            QRgb pixel = myImage.pixel(i,j);
            QColor gray = QColor(pixel);
            int r = gray.red(), g = gray.green(), b = gray.blue();
            r = getBit(r,num-1);
            g = getBit(g,num-1);
            b = getBit(b,num-1);
            QRgb newpixel = qRgb(r,g,b);
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
        qDebug() << savePath;

        switch (imageType) {
        case 'j':
            bitplaneImage.save(savePath,"JPG",-1);
            break;
        case 'p':
            bitplaneImage.save(savePath,"PNG",-1);
            break;
        case 'b':
            bitplaneImage.save(savePath,"BMP",-1);
            break;
        default:
            break;
        }
    }
    return ;
}
