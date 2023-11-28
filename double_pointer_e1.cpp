#include<bits/stdc++.h>

using namespace std;
/* 
    int ** ptr2=  &ptr
*/

int main (){
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<endl<<endl<<"sab sahi chal raha hai"<<endl<<endl;

    /*cout<<"printing p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;
    cout<<*p2<<endl;*/

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;




    return 0;

}