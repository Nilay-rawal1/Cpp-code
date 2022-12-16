#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=1;
    char st='A';

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            
            cout<< st;
            st+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
                
    }
        


    return 0;
}