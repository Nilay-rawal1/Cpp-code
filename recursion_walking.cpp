#include<bits/stdc++.h>
using namespace std;

void reachhome(int src,int dest){
    cout<<"source "<<src<<" destination " <<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pohoch gaya"<<endl;
        return ;
    }
    //processing
    src++;
    //recursive call

    reachhome( src,dest);

}


int main(){
    int dest=10;
    int src=1;
    reachhome(src,dest);




    return 0;
}