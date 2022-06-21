//
//  main.cpp
//  DataStructures
//
//  Created by Joseph Muchengeti on 21.06.22.
//

#include <iostream>
#include <vector>

using namespace std;

class BinaryTree{
public:
    int value;
    BinaryTree *left;
    BinaryTree *right;
    
    BinaryTree(int value){
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

void calculateBranchSums(BinaryTree *node, int runningSum, vector<int> &sums) {
    if(node == nullptr)
        return;
    
    int newRunningSum = runningSum + node->value;
    if(node->left == nullptr && node->right == nullptr){
        sums.push_back(newRunningSum);
        return;
    }
    
    calculateBranchSums(node->left, newRunningSum, sums);
    calculateBranchSums(node->right, newRunningSum, sums);
}
vector<int> branchSums(BinaryTree *root) {
    vector<int> sums;
    calculateBranchSums(root, 0, sums);
    return sums;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    BinaryTree *root = new BinaryTree(1);
    root->left = new BinaryTree(2);
    root->right = new BinaryTree(3);
    root->left->left = new BinaryTree(4);
    root->left->right = new BinaryTree(5);
    branchSums(root);
    
    return 0;
}
