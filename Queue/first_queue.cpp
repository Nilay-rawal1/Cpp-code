#include<bits/stdc++.h>
using namespace std;



int main(){
    queue<int>q;
    q.push(14);
    q.push(15);
    q.push(13);
    cout<<"size of queue is:"<<q.size()<<endl;
    q.pop();
    cout<<"size of queue is:"<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<< q.back();

    return 0;
}