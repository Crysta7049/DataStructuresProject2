#include "B_Tree.h"
#include "LLNode.h"
#include "TreeNode.h"
#include <vector>
#include <string.h>

B_Tree::B_Tree(){ //constructor
    //cout<< "B_Tree constructor is working"<<endl;
    this -> root = NULL;


}

B_Tree::~B_Tree() {
    //cout << "B_Tree destructor called\n" << endl;

}

void B_Tree::insert(string word, int lineNumber){//Inserting function by checking and setting the left and right children
    //cout <<"In the insert function"<< endl;
    TreeNode* current = root;
    bool keepGoing = true;
    while(keepGoing){
        if(root == 0){
            root = new TreeNode(word);
            root -> nodeLineNums.push_back(lineNumber);
            keepGoing = false;
        }
        else if(word == current -> key_value_){
            current ->nodeLineNums.push_back(lineNumber);
            keepGoing = false;
        }
        else if(word < current -> key_value_){
            if(current -> left_ == NULL){
               current -> left_ = new TreeNode(word);
               current -> left_ -> nodeLineNums.push_back(lineNumber);
               keepGoing = false;
            }
            else{
                current = current -> left_;
            }
        }
        else{
            if(current -> right_ == NULL){
                current -> right_ = new TreeNode(word);
                current -> right_ -> nodeLineNums.push_back(lineNumber);
                keepGoing = false;
            }
            else{
                current = current -> right_;
            }
        }
    }
}

void B_Tree::printInOrder(TreeNode* leaf){
//    for(int i= 0; i< lineNums.size(); i++){
//      cout<< lineNums[i]<<endl;
//    }
    if(leaf == NULL){
        //cout<<"Nothing in Tree"<<endl;
    }
    else if (leaf != NULL){
//       for (size_t i=0; i< lineNums.size(); i++){
            printInOrder(leaf -> left_);
            cout<< leaf -> key_value_ << ": ";
            leaf -> printLineNums();
            cout<<endl;
            printInOrder(leaf -> right_);

        //}
    }
}


void B_Tree::destroy_tree(TreeNode * leaf){ //Destroys the tree
   // cout<<"In the destroy function"<<endl;
    if(leaf == NULL){
      //  cout<<"Nothing to destroy"<<endl;
    }
    if(leaf != NULL){
       // cout<<"Deleting leaf."<<endl;
        destroy_tree(leaf -> left_);
        destroy_tree(leaf -> right_);
        delete leaf;
    }
}
