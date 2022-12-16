#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        //print space
        int space =n-1;
        while (space)
        {
            cout<<" ";
            space-=1;

         }
         //print 1st triangle
         int j=1;
         while (j<=i)
         {
            cout<<j;
            j+=1;
         }
         //print 2nd triangle
        int st=i-1;
        while (st)
        {
            cout<<st;
            st-=1;
        }
        


    cout<<endl;
    i+=1;    
    }

    



    return 0;
}