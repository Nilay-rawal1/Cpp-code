#include<bits/stdc++.h>
using namespace std;


    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };


void inorder(TreeNode<int>* root,vector<int>&ins){
      //first step
        if(root==NULL) 
        return;
        inorder(root->left,ins);
        ins.push_back(root->data);
        inorder(root->right,ins);

}
//2nd step using arrray and finding mid element
TreeNode<int>*InorderBST(int s,int e,vector<int>inorderval){
    //base case 
    if(s>e){
        return NULL;

    }
    int mid=(s+e)/2;
    TreeNode<int>*root =new TreeNode<int>(inorderval[mid]);
    root->left=InorderBST(s, mid-1, inorderval);
    root->right=InorderBST(mid+1,e,inorderval);

    return root;



}


TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int>inorderval;
    inorder(root, inorderval);

    return InorderBST( 0,inorderval.size()-1,  inorderval) ;
}



int main (){



    return 0;
    
}