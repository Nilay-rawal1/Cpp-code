#include<bits/stdc++.h>
using namespace std;

int getsum(int  *arr,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}


int main(){
   
    /*char ch='q';
    cout<<sizeof(ch)<<endl;
    char*c=&ch;
    cout<<sizeof(c);*/
    cout<<"enter the stuff ::"<<endl;
    int n;
    cin>>n;
//new keyword creates heap memory ie dynamic 
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ans=getsum(arr,n);
    cout<<"answer is "<<ans<<endl;




    return 0;
}