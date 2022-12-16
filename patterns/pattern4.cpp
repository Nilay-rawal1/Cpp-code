#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int i=1, count=1;

    while (i<=n)
    {
        int j=1;
        while (j<=n)                            /*123                                                        456*/
        {
            cout<<" "<<count;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
        
        
    }
        


    return 0;
}