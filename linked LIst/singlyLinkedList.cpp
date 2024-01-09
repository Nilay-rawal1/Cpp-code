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
    //destructor
    ~Node(){
        int value= this-> data;
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }

        cout<<"memory is free for this "<<value<<endl;
    }
};

// insert at tail ()
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insertion at head()

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
// insertion At any position
void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // starting point
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    // updating tail

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//delete function
void deleteNode(int position, Node *& head){
    if(position==1){
        //deleting first node
        Node * temp=head;
        head=head-> next;
        temp-> next=NULL;
        delete temp;
    }
    else{
        //deleting any middle and last node
       Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

        
    }

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
    Node *tail = node1;
    Print(head);
    // insertion
    insertAtTail(tail, 12);
    Print(head);
    insertAtTail(tail, 15);
    Print(head);
    InsertAtPosition(tail, head, 1, 22);
    Print(head);
    Print(head);
    deleteNode(3,head);
    Print(head);


    return 0;
}