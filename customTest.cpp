//#include "MinHeap.h"
#include "HuffTree.h"
#include <iostream>

using namespace std;

int main(){
    char c=-999;
    MinHeap * mh = new MinHeap();
    
    for (int i = 0; i < 8; i++)
    {
        TreeNode * n = new TreeNode((unsigned char)(i%255), i%4);
        mh->insert(n);
    }
    HuffTree*h=new HuffTree();
    h->buildTree(mh);
    TreeNode*tF=h->getRoot();
    cout<<tF->getFrequency()<<endl;
    cout<<tF->getHuffLeft()->getFrequency()<<endl;
    cout<<tF->getHuffRight()->getFrequency()<<endl;
    cout<<tF->getHuffRight()->getHuffLeft()->getFrequency()<<endl;
    cout<<tF->getHuffRight()->getHuffRight()->getFrequency()<<endl;
    return 0;

}
