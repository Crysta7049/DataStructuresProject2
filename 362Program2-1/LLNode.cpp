#include <iostream>
#include "LLNode.h"

LLNode::LLNode(int l_num, LLNode* next){
    num_val_ = l_num;
    next_ = next;
}

LLNode::~LLNode(){

}

LLNode::LLNode(int l_num){
    num_val_ = l_num;
    next_ = nullptr;
}
