// standard template libaries - array , vector, deque , list

#include<iostream>
#include<array>
#include<bits/stdc++.h>

using namespace std;
int main (){
        int basic[3]={1,2,3};
        array<int,4> a={1,2,3,4};
        int size=a.size();

        for (int i = 0; i < size;i++)
        {
            cout<<a[i]<<endl;
        }
        cout<<"element at 2nd place "<<a.at(2)<<endl;
        cout<<"empty or not"<< a.empty()<<endl;
        cout<<"element at first "<<a.front()<<endl;
        cout<<"element at last"<<a.back()<<endl;



    return 0;
}

