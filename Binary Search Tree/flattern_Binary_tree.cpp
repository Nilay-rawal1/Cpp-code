#include <bits/stdc++.h> 
using namespace std;
    template <typename T>
    class TreeNode {
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
            if(left)
                delete left;
            if(right)
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


TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int>inorderval;
    inorder(root, inorderval);

    int n= inorderval.size();
        //first step
    TreeNode<int>* newroot=new TreeNode<int>(inorderval[0]);
    TreeNode<int>* curr=newroot;

//2nd step of algo
    for(int i=1;i<n;i++ ){

        TreeNode<int>*temp=new TreeNode<int>(inorderval[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;


    }
    //3rd step
    curr->left=NULL;
    curr->right=NULL;

    return newroot;


}

int main(){


    return 0;
    
}
