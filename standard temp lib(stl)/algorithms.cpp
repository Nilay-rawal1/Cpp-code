#include<bits/stdc++.h>
// different algos using stl (#include<algorithm>)
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    cout<<"element exist -> "<<binary_search(v.begin(),v.end(),6)<<endl;
    
    int a=3, b=5;
    cout<<"max element "<<max(a,b)<<endl;
    cout<<"min element "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a="<<a<<"  b="<<b<<endl;

    //cout<<"sorted order"<<(v.begin(),v.end())     ;


    return 0;
}