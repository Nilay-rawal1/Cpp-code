#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
        //base case
        if((size==0)||(size==1)){
            return true;
        }
        if (arr[0]>arr[1])
        {
            return false;
        }
        else{
            bool remaining=isSorted(arr+1,size-1);
            return remaining;
        }
     
}

int main(){

    int arr[5]={2,6,3,5,4};
    int size=5;
    bool ans=isSorted(arr,size);

    if(ans){
        cout<<"array is sorted";

    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}