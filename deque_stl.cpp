// push n pop of element on both starting n ending index of array 
//it is dynamic & random acsess is possible
// doubleendedque
#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int>d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
   // d.pop_back();
    cout<<endl;
    cout<<"Print first index -> "<<d.at(1);





    return 0;
}