#include<iostream>
using namespace std;

int getmax(int num[],int n){
    int maxi= INT32_MIN;
    for (int i = 0; i < n; i++)
    {
      /**/  if (num[i]>maxi)
        {
            maxi=num[i];
        }
        
    }

    return maxi;
    
}
int getmin(int num[],int n){
    int min= INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
        
    }

    return min;
    
}


int main(){

    int size;
    cout<<"Enter the size of array";
    cin>>size;

    int num[100];
    //taking input 
    for (int i = 1; i < size; i++)
    {
       cin>>num[i];
    }
    
    cout<<"maximum value of arrray is "<<getmax(num,size)<<endl;

    cout<<"manimum value of arrray is "<<getmin(num,size)<<endl;


    return 0;
}