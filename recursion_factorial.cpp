#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    //base case (return mandatory)
    if(n==0){
        return 1;
    }//without base case grabage value will be thrown
    int small=factorial(n-1) ; //small problem f(n)=n*f(n-1)
    int problem=n*small;//ans logic
    return problem;

}


int main(){

    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;



}