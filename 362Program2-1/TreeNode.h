#ifndef TREENODE_H
#define TREENODE_H

#include <string>
#include <vector>

#include "LLNode.h"

using namespace std;

class TreeNode
{
    private:
        //vector<int> nodeLineNums;

    public:
        string key_value_;
        TreeNode * left_;
        TreeNode * right_;
        TreeNode(string word);
        vector<int> nodeLineNums;


        TreeNode(string word, TreeNode* left, TreeNode* right);

        ~TreeNode();

        void printLineNums();





        /* member variables */


        //TreeNode * listPoint_;

};

#endif // TREENODE_H
