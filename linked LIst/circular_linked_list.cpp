#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data ;
    Node* next;

    //constructor
    Node(int d){
        this-> data=d;
        this->next=NULL;

    }
    //deconstructor
    ~Node(){
        int value=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data: "<<value<<endl;
    }
};

void InsertNode(Node* &tail,int element, int d){
    
    // empty list
    if(tail==NULL){
        Node* newnode= new Node(d);
        tail=newnode;
        newnode->next=newnode;
    
    }
    else{
        // non empty list
        // assuming that the elements is present in list

        Node* curr=tail;
        while(curr->data != element){
            curr=curr->next;
        }
        //element found-> curr is responding element wala node
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }
     
}

//printing func
void print(Node* tail){
    Node* temp=tail;
//using do while
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    

    
   /*while(tail->next!=temp){
        cout<<tail->data<<" ";
        tail=tail->next;

    }
    cout<<" ";*/
}




int main(){
    Node* tail=NULL;
//epmty list me insert krre hai
    InsertNode(tail,5,3);
    print(tail);
    InsertNode(tail,3,5);
    print(tail);

    return 0;
}