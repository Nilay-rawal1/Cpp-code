#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
//insert at tail ()
void insertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail->next=temp;
    tail= temp;

}

// insertion at head()

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
// traversing and printing

void Print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// driver code
int main()
{
 
    // created a new note
    Node *node1 = new Node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // head pointed to node1

    Node *head = node1;
    Node* tail=node1;
    Print(head);
    // insertion
    insertAtTail(tail, 12);
    Print(head);
    insertAtTail(tail, 15);
    Print(head);

    return 0; 
}