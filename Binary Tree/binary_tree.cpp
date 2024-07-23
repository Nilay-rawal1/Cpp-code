#include<iostream>
using namespace std;

class node{
    public:
        int data;
        
        node* left;
        node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};
node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;

    }
    cout<<"enter data for insert at left:"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for insert at right :"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}



int main(){
    node* root=NULL;

    //creating a tree
    root=buildTree(root);





    return 0;
}