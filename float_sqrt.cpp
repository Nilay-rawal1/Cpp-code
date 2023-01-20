#include<iostream>
using namespace std;

long long  int sqrtInt(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){
            long long int sq=mid*mid;
            if(sq==n){
                return mid;
            }
            else if(sq<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }

double floatsqrt (int n,int pre,int tempsol){
    double factor=1;
    double ans=tempsol;
    for (int i = 0; i < pre; i++)
    {
        factor/=10;
        for (double j =ans; j*j< n; j+=factor)
        {
           ans=j;
        }
        
    }
    return ans;
    

}




int main (){
    int n,m;
    cout<<"enter the number ";
    cin>>n;
    cout<<"enter the decimal place till you want:- ";
    cin>>m;
    int tempsol= sqrtInt(n);

    cout<<"Answer is ="<<floatsqrt(n,m,tempsol);





    return 0;
}