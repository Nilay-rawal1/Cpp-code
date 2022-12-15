#include<iostream>
using namespace std;

int main(){
    int i=0,n, sum=0;
    cout<<"enter the number";
    cin>>n;
    while (n>=i)
    {
        sum+=i;
        i+=2;
    }
    
    cout<<"the result is "<<sum;


    return 0;
}