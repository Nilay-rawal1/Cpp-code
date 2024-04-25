#include <bits/stdc++.h>

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

void InsertNode(Node *&tail, int element, int d)
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

void DeleteNode(Node *&tail, int values)
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
        // 1 Node in linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 Node in linked List
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
/*circluar list or not*/
bool isCirularList(Node *head)
{
    // empty list
    if (head == NULL)
    {
        return false;
    }

    // only one and more than one node
    // logic overriding(overlapping) each other

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
        return true;

    return false;
}
/* detected loop in linked List*/
/*bool detectLoop(Node* head){

    if(head==NULL){
        return false;
    }

    map<Node* ,bool>visited;
    Node* temp= head;
    while (temp!=NULL)
    {
        if(visited[temp]==true){
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;


    }
    return false;
    
}*/

Node*  floydDetectLoop(Node* head){
    if(head==NULL) return NULL;

    Node*slow=head;
    Node*fast=head;
    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;

        }
        slow=slow->next;
        if(slow==fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
//first head
Node* getStartingLoop(Node* head){

}
//removing loops
void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node * startofLoop=getStartingLoop(head);
    Node *temp=startofLoop;
    while(temp->next!=startofLoop){
        temp=temp->next;

    }
    temp->next=NULL;
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

    print(tail);
    if(isCirularList(tail)){
        cout<<"Linked list is circluar"<<endl;
    }
    else{
        cout<<"Linked list is not circluar"<<endl;
    }

   if( floydDetectLoop(tail)!=NULL){
    cout<<"cycle is present" <<endl;

   }
   else{
    cout<<"cycle is not present"<<endl;
   }

    return 0;
}