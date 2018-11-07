#include "huffmancoding.h"

huffmanCoding::huffmanCoding(double *igray, int n)
{
    num = n;
    hnode *htree = new hnode[num*2-1];
    initTree(htree,igray);
    createTree(htree);
    readTree(htree);
    return ;
}

void huffmanCoding::initTree(hnode *htree, double *igray)
{
    for(int i=0;i<num*2-1;i++)
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
    for(int i=num;i<num*2-1;i++)
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




