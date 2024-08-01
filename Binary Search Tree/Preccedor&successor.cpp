#include<bits/stdc++.h>
using namespace std;

 class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


pair<int, int> predecessorSuccessor(TreeNode *root, int key) {
    int pre = -1;
    int suc = -1;

    TreeNode *temp = root;
    
    // Step 1: Find the node with the given key
    while (temp != NULL && temp->data != key) {
        if (temp->data > key) {
            suc = temp->data;  // Potential successor
            temp = temp->left;
        } else {
            pre = temp->data;  // Potential predecessor
            temp = temp->right;
        }
    }

    if (temp == NULL) {
        // Key is not present in the tree
        return make_pair(pre, suc);
    }

    // Step 2: Find the predecessor (maximum value in the left subtree)
    TreeNode *leftSubtree = temp->left;
    while (leftSubtree != NULL) {
        pre = leftSubtree->data;
        leftSubtree = leftSubtree->right;
    }

    // Step 3: Find the successor (minimum value in the right subtree)
    TreeNode *rightSubtree = temp->right;
    while (rightSubtree != NULL) {
        suc = rightSubtree->data;
        rightSubtree = rightSubtree->left;
    }

    // Return the result as a pair
    return make_pair(pre, suc);
}
