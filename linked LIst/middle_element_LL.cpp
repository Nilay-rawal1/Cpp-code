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
        next = nullptr;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = nullptr;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};



int getLength(Node* head){
    int len=0;
    while(head !=nullptr){
        len++;
        head=head->next;
    }
    return len;
}

Node *findMiddle(Node *head) {
    // Write your code here
    int len =getLength(head);
    int ans=(len/2);
    Node* temp =head;
   int cnt=0;
   while(cnt<ans){
       temp=temp->next;
       cnt++;
   }
   return temp;

}

