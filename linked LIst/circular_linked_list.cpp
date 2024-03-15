#include <bits/stdc++.h>
#include<iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // deconstructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

void InsertNode(Node* &tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        Node *newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non empty list
        // assuming that the elements is present in list

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found-> curr is responding element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// printing func
void print(Node *tail)
{
    Node *temp = tail;
    // using do while
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;

    /*while(tail->next!=temp){
         cout<<tail->data<<" ";
         tail=tail->next;

     }
     cout<<" ";*/
}

void DeleteNode(Node* &tail, int values)
{
    // empty list
    if (tail == NULL)
    {
        cout << "list is empty";
        return;
    }
    else
    {
        // non empty list
        // assuming value is present in the linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != values)
        {

            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //1 Node in linked List
        if(curr==prev){
            tail=NULL;
        }

        //>=2 Node in linked List
        if(tail==curr){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *tail = NULL;
    // epmty list me insert krre hai
    InsertNode(tail, 5, 3);
    print(tail);
    InsertNode(tail, 3, 5);
    print(tail);
    InsertNode(tail, 5, 7);
    print(tail);
    InsertNode(tail, 7, 9);
    print(tail);
    InsertNode(tail, 5, 6);
    print(tail);
    InsertNode(tail, 9, 10);
    print(tail);
    DeleteNode(tail,3);
    print(tail);
    return 0;
}