#include<bits/stdc++.h>
using namespace std;


class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;

        }
    }
    void pop(){
        if(top>0){
            top--;

        }
        else{
            cout<<"stack underflow"<<endl;

        }

    }
    int peek(){

        if(top>=0&& top<size){
            return arr[top];

        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    
};







int main(){


    Stack st(5);

    st.push(2);
    st.push(13);
    st.push(22);


    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;



   /*           Using standard template library
    stack<int>s;
    s.push(2);
    s.push(13);
    s.pop();

    cout<<"printing top element |:"<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty";
    }
    else   {
        cout<<"stack is not empty";
    }
*/
//stack using stack
 

    return 0;

}