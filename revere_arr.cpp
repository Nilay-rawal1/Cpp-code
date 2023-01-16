
#include<iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int res[100];

    for (int i = 0; i < size; i++)
    {
        res[i] = arr[size - i - 1];
    }
    
    cout << "Reverse Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << res[i] << " ";
    }
    
}

int main(){

    int num[5] = {3,-5,8,-6,2};
    int n = 5;
    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    reverseArray(num,n);
}

