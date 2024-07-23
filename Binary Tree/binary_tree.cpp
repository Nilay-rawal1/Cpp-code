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
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queue still has some child ndoes
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

void inOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void Preoder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Preoder(root->left);
    Preoder(root->right);
}
void Postoder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    Postoder(root->left);
    Postoder(root->right);
    cout << root->data << " ";
}

// building tree from level order

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter left node for:" << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "enter right node for:" << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    buildFromLevelOrder(root);
    // 1 3 5 7  11 17 -1 -1 -1 -1 -1 -1 -1
    cout << "Printing the level order traversal output" << endl;
    levelOrdertraversal(root);
    // creating a tree
    /*

        root = buildTree(root);

        // level order
        // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
        cout << "Printing the level order traversal output" << endl;
        levelOrdertraversal(root);

        cout<<"Printing INOrder traversal :"<<endl;
        inOrder(root);

        cout<<endl<<"Printing Pre order traversal :"<<endl;
        Preoder(root);


        cout<<endl<<"Printing Post order traversal :"<<endl;
        Postoder(root);*/

    return 0;
}