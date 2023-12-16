#include<bits/stdc++.h>
using namespace std;
void SortArray(int *arr,int n){

    if(n==0|| n==1 ){
        return;
    }    
    //case 1
    for (int  i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    SortArray(arr,n-1);

    
}



int main(){
    int arr[5]={2,5,1,6,8};

    SortArray(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}