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

class info {
    public:
    int maxi;
    int mini; // corrected from 'minil' and added the missing semicolon
    bool isbst;
    int size;
};

info solve(TreeNode* root, int &ans) {
    // base case
    if (root == NULL) {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);
    info curNode;
    curNode.size = left.size + right.size + 1;
    curNode.maxi = max(root->data, right.maxi);
    curNode.mini = min(root->data, left.mini);

    if (left.isbst && right.isbst &&
        (root->data > left.maxi && root->data < right.mini)) {
        curNode.isbst = true;
    } else {
        curNode.isbst = false;
    }

    // update the answer
    if (curNode.isbst) {
        ans = max(ans, curNode.size);
    }

    return curNode;
}

int largestBST(TreeNode* root) {
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}


int main(){


    return 0;
    
}