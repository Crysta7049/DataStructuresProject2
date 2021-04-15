#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>
#include <vector>

#include "TreeNode.h"
#include "LLNode.h"
#include "B_Tree.h"

using namespace std;

void parseLine(string entireLine, vector<string> &splitLine){
    char * delims = " .,\n";
    char *token = 0;
    char *c_string_line = (char*)entireLine.c_str();

    for(token = strtok(c_string_line, delims); token != NULL; token = strtok(NULL, delims)){
        string tmp = token;
        splitLine.push_back(tmp);
    }
}

int main()
{
    B_Tree myBTree;
    ifstream input;
    input.open("test.txt");

    int counter = 0;
    string endMarker = "#";
    string entireLine;

    while(getline(input, entireLine)){

        cout<< entireLine << endl;

        if(entireLine != endMarker){

            counter++;
            vector<string> splitLine;

            parseLine(entireLine, splitLine);
            cout<< splitLine.size();

            for(size_t i = 0; i< splitLine.size(); i++){
                myBTree.insert(splitLine[i], counter);

            }
        }
    }

    myBTree.printInOrder(myBTree.root);
    myBTree.destroy_tree(myBTree.root);

    return 0;
}
