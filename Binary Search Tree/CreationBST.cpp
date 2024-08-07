#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // Purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // Queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


//in Order, Pre Order and Post Order
//void fucntions taking from binary tree wala question
Node *insertInBST(Node *&root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        // Right part me insert karna hai
        root->right = insertInBST(root->right, d);
    }
    else
    {
        // Left part me insert karna hai
        root->left = insertInBST(root->left, d);
    }
    return root;
}



Node* minval(Node*root){
    Node* temp =root;

    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp;

}

Node* maxval(Node*root){
    Node* temp =root;

    while(temp->right !=NULL){
        temp=temp->right;
    }
    return temp;
    
}



Node* deleteFromBST(Node* root,int val){
        //base case
        if(root==NULL)
        return root;

        if(root->data==val){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }

            //1child
                    //left child
                if(root->left !=NULL && root->right ==NULL){
                    Node* temp=root->left;
                    delete root;
                    return temp;
                }
                    //right child
                if(root->left ==NULL && root->right!=NULL){
                        Node* temp=root->left;
                        delete root;
                        return temp;

                }

            //2child
            if(root->left !=NULL && root->right !=NULL ){
                int mini = minval(root->right)->data;
                root->data=mini;
                root->right=deleteFromBST(root->right,mini);
                return root;
            }


        }
        else if (root->data>val){
            root->left=deleteFromBST(root->left,val);
                return root;
        }
        else{
            root->right=deleteFromBST(root->right,val);
            return root;

        }

}


void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertInBST(root, data);
        cin >> data; // This needs to be inside the loop to read new data.
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST (end input with -1):" << endl;

    takeInput(root);
    cout << "Printing the BST:" << endl;
    levelOrderTraversal(root);

    cout<<endl<<"<----- Min and Max Values ----->"<<endl;
    cout<<"min value : "<< minval(root)->data;
    cout<<endl;
    cout<<"max value : "<< maxval(root)->data<<endl;
    cout<<"enter the value you want to delete:";
    int val;
    cin>>val;
     root= deleteFromBST(root,val);

    cout <<endl<< "Printing the BST  after deleteion:" << endl;
    levelOrderTraversal(root);


    return 0;
}


