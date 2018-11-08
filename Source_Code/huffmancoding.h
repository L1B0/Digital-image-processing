#ifndef HUFFMANCODING_H
#define HUFFMANCODING_H

#include<mypic.h>
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

typedef struct hnode{
    int left,right,parent;
    double gray;
}hnode;

class huffmanCoding
{
public:
    int num;
    char **hcode = new char*[256];
    hnode *htree;

    huffmanCoding(double *igray, int n, bool f);
    void initTree(hnode *htree, double *igray);
    void createTree(hnode* htree);
    void selectHuffnode(hnode* htree,int n,int &s1,int &s2);
    void readTree(hnode* htree);
    QImage decompressFile(QString pp);
private:

};

#endif // HUFFMANCODING_H
