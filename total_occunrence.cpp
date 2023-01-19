#include<iostream>
using namespace std;
// First and Last Position of an Element In Sorted Array
int firstocc(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid= s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if (key>arr[mid])
        {
             s=mid+1; //right side traverse

        }
        else{
            e=mid-1; //left side traverse
        }
         mid= s+(e-s)/2;
        
    }
    return ans;
    


}
int lastocc(int arr[],int n,int key){
    int s=0,e=n-1;  //s=start & e=end
    int mid= s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;

        }
        else if (key>arr[mid])
        {
             s=mid+1; //right side traverse

        }
        else{
            e=mid-1; //left side traverse
        }
         mid= s+(e-s)/2;
        
    }
    return ans;
    


}


int main(){
    int even[5]={1,2,3,3,5};

    int total= lastocc(even,5,3) -firstocc(even,5,3) +1;

    cout<<"total number of occurence of 3 is "<<total ;


    return 0;
}