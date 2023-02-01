#include<iostream>
#include<queue>
using namespace std;
//first in first out (FIFO)
int main(){

    queue<string> q;
    q.push("Nilay");
    q.push("Rawal");
    q.push("student");
    cout<<"the top element -->> "<<q.front()<<endl;
    cout<<"size of stack = "<<q.size()<<endl;

    return 0;
}