#ifndef LLNODE_H
#define LLNODE_H

#include <iostream>
using namespace std;

class LLNode
{
    public:
        LLNode(int l_num, LLNode* next);

        ~LLNode();

        LLNode(int l_num);

        int num_val_;
        LLNode * next_;
        //LLNode * listPoint_;
};


#endif // LLNODE_H
