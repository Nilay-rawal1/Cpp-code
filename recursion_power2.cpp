#include<bits/stdc++.h>
using namespace std;


int power(int n){
    //base condition
    if (n==0)
        return 1;
    //recursive relation
    int smallpower=power(n-1);
    int mainpower=2*smallpower;
    return mainpower;
}



int main(){


    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}