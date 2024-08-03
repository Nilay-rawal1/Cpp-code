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



// inorder traversal to make it sorted
void inorder(TreeNode* root, vector<int>& ins) {
    if (root == NULL)
        return;
    inorder(root->left, ins);
    ins.push_back(root->data);
    inorder(root->right, ins);
}

// merging two sorted arrays
vector<int> mergeArr(vector<int>& a, vector<int>& b) {
    vector<int> ans(a.size() + b.size());
    int i = 0, j = 0;
    int k = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            ans[k++] = a[i];
            i++;
        } else {
            ans[k++] = b[j];
            j++;
        }
    }
    while (i < a.size()) {
        ans[k++] = a[i];
        i++;
    }
    while (j < b.size()) {
        ans[k++] = b[j];
        j++;
    }
    return ans;
}

// create BST from inorder traversal
TreeNode* InorderBST(int s, int e, vector<int>& inorderval) {
    if (s > e) {
        return NULL;
    }
    int mid = (s + e) / 2;
    TreeNode* root = new TreeNode(inorderval[mid]);
    root->left = InorderBST(s, mid - 1, inorderval);
    root->right = InorderBST(mid + 1, e, inorderval);
    return root;
}

vector<int> mergeBST(TreeNode* root1, TreeNode* root2) {
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    vector<int> mergedArray = mergeArr(bst1, bst2);
    int s = 0, e = mergedArray.size() - 1;
    TreeNode* newRoot = InorderBST(s, e, mergedArray);

    return mergedArray;  // This will return the merged sorted array
}


int main(){



    return 0;
}