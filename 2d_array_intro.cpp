#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4];

    //input 
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

    
}