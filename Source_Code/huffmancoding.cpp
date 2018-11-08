#include "huffmancoding.h"

huffmanCoding::huffmanCoding(double *igray, int n, bool f)
{
    num = n;
    if( f == false ) return ;
    htree = new hnode[num*2];
    initTree(htree,igray);
    createTree(htree);
    readTree(htree);
    return ;
}

void huffmanCoding::initTree(hnode *htree, double *igray)
{
    for(int i=0;i<num*2;i++)
    {
        htree[i].left = htree[i].right = htree[i].parent = -1;
        if( i < num )   htree[i].gray = igray[i];
        else htree[i].gray = -1;
    }
    return ;
}

void huffmanCoding::selectHuffnode(hnode *htree, int n, int &s1, int &s2)
{
    //find s1
    for(int i=0;i<n;i++)
    {
        if(  htree[i].gray != 0 && htree[i].parent == -1 )
        {
            s1 = i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if( htree[i].gray != 0 && htree[i].parent == -1 && htree[i].gray < htree[s1].gray )
            s1 = i;
    }
    //find s2
    for(int i=0;i<n;i++)
    {
        if( htree[i].gray != 0 && i != s1 && htree[i].parent == -1 )
        {
            s2 = i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if( htree[i].gray != 0 && i != s1 && htree[i].parent == -1 && htree[i].gray < htree[s2].gray )
            s2 = i;
    }
    return ;
}

void huffmanCoding::createTree(hnode* htree)
{
    for(int i=num;i<num*2;i++)
    {
        int s1=-1,s2=-1;
        selectHuffnode(htree,i,s1,s2);
        if( s2 == -1 ) break;
        //parent node
        htree[i].left = s1;
        htree[i].right = s2;
        htree[i].gray = htree[s1].gray + htree[s2].gray;
        //s1&&s2's parent
        htree[s1].parent = htree[s2].parent = i;
    }
}

void huffmanCoding::readTree(hnode *htree)
{
    for(int i=0;i<num;i++)
    {
        if( htree[i].gray == 0 )
        {
            hcode[i] = NULL;
            continue;
        }
        int temp = i, deepth=num-1;
        char *tempCode = new char[num];
        tempCode[num-1] = '\0';

        while( htree[temp].parent != -1 )
        {
            deepth --;
            //lchild-0 rchild-1
            if( temp == htree[htree[temp].parent].right ) tempCode[deepth] = '1';
            else tempCode[deepth] = '0';
            temp = htree[temp].parent;
        }
        //qDebug() << i << deepth << huffcode;
        hcode[i] = new char[num-deepth];
        strcpy(hcode[i],&tempCode[deepth]);
    }
    return ;
}

QImage huffmanCoding::decompressFile(QString pp)
{
    int width=0, height=0;
    char *ppath;
    //QString2Char*
    QByteArray ba = pp.toLatin1();
    ppath = ba.data();
    qDebug() << "path: " << ppath;

    //Reading .huff head info
    FILE *huff = fopen(ppath,"r");
    if( huff == NULL )  QMessageBox::information(NULL, QObject::tr("Error"),QObject::tr("Open failed!"));
    fscanf(huff,"%d %d\n",&width,&height);
    qDebug() << width << height;

    //rebuild huffmanTree
    htree = new hnode[256*2];
    for(int i=0;i<256*2;i++)
    {
        int t;
        fscanf(huff,"%d %d %d %d\n",&t,&htree[i].left,&htree[i].right,&htree[i].parent);
    }
    //decode huffmancode data
    QImage *dImage = new QImage(width,height,QImage::Format_Indexed8);
    initImage(dImage);
    int pixelNum=0, lastP, p;
    for(int i=256*2-1;i>=0;i--)
        if( htree[i].left != -1 && htree[i].right != -1 )
        {
            lastP = i;
            break;
        }
    p = lastP;
    while(pixelNum < width*height)
    {
        //qDebug() << "num: " << pixelNum;
        unsigned char hc = fgetc(huff);
        for(int i=0;i<8;i++)
        {
            if( hc%2 == 0 ) // leftchild
            {
                p = htree[p].left;
            }
            else
            {
                p = htree[p].right;
            }
            //qDebug() << p;
            if( htree[p].left == -1 && htree[p].right == -1 ) // leaf
            {
                int x = pixelNum/height, y = pixelNum%height;
                dImage->setPixel(x,y,p);
                pixelNum ++;
                p = lastP;
            }
            hc = (hc>>1);
        }
    }

    return *dImage;
}




