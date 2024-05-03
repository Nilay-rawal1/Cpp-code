#include <bits/stdc++.h>
using namespace std;    

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

void insertAtTail(Node* &tail, Node* curr ) {
    tail -> next = curr;
    tail = curr;
}

Node* sortList(Node *head){
    // Write your code here.

   Node* zerohead=new Node(-1);
   Node* zerotail=zerohead;
   Node* onehead= new Node(-1);
   Node* onetail=onehead;
   Node* twohead=new Node(-1);
    Node* twotail=twohead;

    Node* curr=head;
    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zerotail,curr);
        }
        else if (value==1){
            insertAtTail(onetail,curr) ;
        }
        else if (value==2){
            insertAtTail(twotail,curr);
        }
         curr = curr -> next;
    }

   if(onehead -> next != NULL) {
        zerotail -> next = onehead -> next;
    }
    else {
        //1s list -> empty
        zerotail -> next = twohead -> next;
    }
    
    onetail -> next = twohead -> next;
    twotail -> next = NULL;
    
	//setup head 
    head = zerohead -> next;
    
    //delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head;


}