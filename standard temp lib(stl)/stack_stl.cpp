#include<iostream>
#include<stack>
using namespace std;
//fist in last out

int main(){

    stack<string> s;
    s.push("Nilay");
    s.push("Rawal");
    s.push("student");
    cout<<"the top element -->> "<<s.top()<<endl;
    cout<<"size of stack = "<<s.size()<<endl;
    return 0;
}