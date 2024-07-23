#include <iostream>
#include <queue>

using namespace std;

class node
{
public:
    int data;

    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for insert at left:" << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for insert at right :" << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrdertraversal(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;

    // creating a tree

    root = buildTree(root);

    // level order
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Printing the level order traversal output" << endl;
    levelOrdertraversal(root);

    return 0;
}