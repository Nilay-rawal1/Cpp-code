#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){

    int start=0;
    int end=(size-1);
    int mid =start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid =start +(end-start)/2;
    }
    return -1;
}



int main(){
    int even[6]={2,4,6,8,12,14};
    int odd[6]={3,5,7,11,13,15};

    int result= binary_search(even,6,13);
    cout<<"the resultant index is "<<result;


return 0;
}