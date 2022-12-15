#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number : ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
       int j=i;
       while (j<=n)
       {
            cout<<i;
            j+=1;
       }
       cout<<endl;
       i+=1;
       
    }
     while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
            cout<<i;
            j+=1;
       }
       cout<<endl;
       i+=1;
       
    }
    

return 0;
}

/* 111
   222
   333
   
*/