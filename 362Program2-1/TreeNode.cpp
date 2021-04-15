#include "TreeNode.h"
#include <string>
#include "LLNode.h"


TreeNode::TreeNode(string word, TreeNode* left, TreeNode* right){
    key_value_ = word;
    left_ = left;
    right_ = right;
    //vector<int> nodeLineNums;
    //nodeLineNums.push_back(newLineNumber);

}

TreeNode::~TreeNode(){

}

TreeNode::TreeNode(string word){

    key_value_ = word;
    left_ = nullptr;
    right_ = nullptr;
}

//void TreeNode::addLineNumber(int newLineNumber){
//    TreeNode::nodeLineNums.push_back(newLineNumber);
//}

void TreeNode::printLineNums(){
        for(size_t i = 0; i< nodeLineNums.size(); i++){
            cout<< nodeLineNums[i]<<" ";
        }
}
