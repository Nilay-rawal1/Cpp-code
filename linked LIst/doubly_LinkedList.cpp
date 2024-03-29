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
//insestion at head
void insertAtHead(Node* &tail,Node* &head ,int d){
    // if list is empty
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{ 
    Node* temp =new Node(d);
    temp-> next=head;
    head->prev=temp;
    head=temp;
    }
}
//traversing
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
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
void insertAtTail(Node* &tail, Node * &head,int d){
    // 
    if(tail==NULL){
        Node *temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp =new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail =temp;
    }
}

void insertAtPostion(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertAtHead(tail,head,d);
        return ;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp-> next;
        cnt++;

    }
    //insertion at last position
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return ;
    }
    //creating a node for d
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;

}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail=node1;
    print(head);
    cout<<getlength(head)<<endl;
    insertAtHead(tail,head,11);
     print(head);
     insertAtHead(tail,head,12);
     print(head);
     insertAtHead(tail,head,13);
     print(head);
cout<<getlength(head)<<endl;

    insertAtTail(head,tail,45);
    print(head);

    insertAtPostion(tail,head,2,100);
    print(head);
    return 0;
}