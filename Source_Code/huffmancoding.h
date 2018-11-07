#ifndef HUFFMANCODING_H
#define HUFFMANCODING_H

#include<mypic.h>


typedef struct hnode{
    int left,right,parent;
    double gray;
}hnode;

class huffmanCoding
{
public:
    int num;
    char **hcode = new char*[256];

    huffmanCoding(double *igray, int n);
    void initTree(hnode *htree, double *igray);
    void createTree(hnode* htree);
    void selectHuffnode(hnode* htree,int n,int &s1,int &s2);
    void readTree(hnode* htree);
private:

};

#endif // HUFFMANCODING_H
