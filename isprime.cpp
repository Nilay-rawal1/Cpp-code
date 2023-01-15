#include<iostream>
using namespace std;

bool isprime(int n){
    
    for (int i = 2 ; i < n; i++)    
    {
        if(n%i==0){
            return 0;
        }
       
    }
    return 1;
    
}


int main(){
    int n;
    cout<<"enter the num to check";
    cin>>n;
    if (isprime(n))
    {
       
       cout<<"is a prime number";
    }
    else{
        cout<<"not prime";
    }
    

    return 0;
}