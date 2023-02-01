#include<iostream>
#include<list>
 using namespace std;



 int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
     }
    list<int> n(l);


    return 0;
 }