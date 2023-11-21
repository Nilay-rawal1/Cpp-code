#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//to print row wise sum
void printSum(int arr[0][4],int row,int col){
    cout<<"Row wise sum in print" <<endl;
    for (int row = 0; row < 3; row++){
        int sum=0;

        for (int col = 0; col < 4; col++)
        {
           sum+= arr[row][col];
        }
        cout<<sum<<" ";
    }

}

//largest sum row
int largestRowSum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int RowIndex=-1;
    for (int row = 0; row < 3; row++){
        int sum=0;

        for (int col = 0; col < 4; col++)
        {
           sum+= arr[row][col];
        }
        if(sum>maxi){

            maxi=sum;
            RowIndex=row;
        }
        
    }
    cout<<"the maxium sum is "<<maxi<<endl;
    return  RowIndex;
} 




int main()
{
    int arr[3][4];

    cout << "enter the  elements:-" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    // array printing
    cout << "printing the array" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col]<<" ";
        }
        cout << endl;
    }
    printSum(arr,3,4);
    cout<<endl;
    int ansIndex= largestRowSum(arr,3,4);
    cout<<"Max row is at index: "<<ansIndex<<endl;

    return 0;
}