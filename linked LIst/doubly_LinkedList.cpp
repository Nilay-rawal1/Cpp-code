#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev; // pointer
    Node *next; // node as pointer

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
//traversing
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
//gives length
int getlength(Node* head){
    int len=0;

     Node *temp = head;
    while (temp != NULL)
    {
       len++;
        temp = temp->next;
    }
   return len;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    cout<<getlength(head);

    return 0;
}