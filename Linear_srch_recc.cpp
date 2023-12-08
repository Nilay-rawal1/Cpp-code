#include<bits/stdc++.h>
using namespace std;

void print (int *arr,int size){
    cout<<endl<<"size of array : "<<size<<endl;

    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

}

bool Linearsearch(int *arr,int size , int key){
//printing stages
    print(arr,size);
    //base case
    if(size==0)
     return false;

     if(arr[0]==key){
        return true;

     }
     else{
        bool remaining =Linearsearch(arr+1,size-1,key);
        return remaining;
     }
    
}

int main(){
int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"enter the key element to be searched: ";
    int key;
    cin>>key;
    int size =10;
    
    bool ans=Linearsearch(arr,size,key);

    if(ans){
        cout<<"key is found";

    }
    else{
        cout<<"key does not exists";
    }

    return 0;
}