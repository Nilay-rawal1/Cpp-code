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


Node* sortList(Node *head){
    // Write your code here.

    int zerocount=0;
    int onecount=0;
    int twocount=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp !=NULL ){
            if(temp->data==0){
                zerocount++;
            }
            else if (temp->data==1){
                onecount++;
            }
            else if(temp->data==2){
                twocount++;
            }
            temp=temp->next;
            
        }
        
    }
temp=head;
        while(temp!=NULL){
            if(zerocount!=0){
                temp->data=0;
                zerocount--;
            }
            else if(onecount!=0){
                temp->data=1;
                onecount--;
            }
            else if(twocount!=0){
                temp->data=2;
                twocount--;
            }
            temp=temp->next;
        }
        return head;




}