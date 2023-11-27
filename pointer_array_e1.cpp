#include<bits/stdc++.h>
using namespace std;

int main (){
    /*
    int arr[10]={23,122,41,69};
    //arr =&arr[0]
    cout<<"address of first memory block :  "<<arr<<endl;

    //using & operator

    cout<<"address of first memory block :  "<<&arr[0] <<endl;
    //using * operations
    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<<*(arr)+1 <<endl;
    cout<<"8th "<<*(arr+2)<<endl;
    //chalaki
    // int i=3;
    // cout<<i[arr]<<endl;
    int i=3;
    cout<<i[arr]<<endl;
*/
    // int temp[10]={12,32,332};
    // cout<<"size of array  "<<sizeof(temp)<<endl;
    // int *ptr=&temp[0];
    //  cout<<sizeof(ptr)<<endl;
    //   cout<<sizeof(*ptr)<<endl;

    int arr[10];
    //error:  arr=arr+1;
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
   



    return 0;
}