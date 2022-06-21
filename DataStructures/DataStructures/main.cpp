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

void preorder(BinaryTree* root){
    if(root == nullptr){
        return;
    }
    cout<< root->value <<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(BinaryTree* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->value<< " ";
    inorder(root->right);
}

void postorder(BinaryTree* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->value <<" ";
}

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
    root->right->left = new BinaryTree(6);
    root->right->right = new BinaryTree(7);
    
    branchSums(root);
    preorder(root);
    cout<<" "<<endl;
    inorder(root);
    cout<<" "<<endl;
    postorder(root);
    cout<<" "<<endl;
    return 0;
}
