#ifndef B_TREE_H
#define B_TREE_H

#include "LLNode.h"
#include "TreeNode.h"
#include <vector>

class B_Tree
{
    public:
        B_Tree();

        ~B_Tree();

        /* member variables */
        int num_nodes;
        TreeNode * root;
//        vector<int> lineNums;

        //Function Prototypes
        void load_file(string);
		void insert(string , int);
		void printInOrder(TreeNode*);
		void destroy_tree(TreeNode*);


    private:

};

#endif // B_TREE_H
