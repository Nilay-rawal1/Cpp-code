#include<bits/stdc++.h>
using namespace std;

void reverses(char name[], int n){
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}

int getlength(char name[]){
    int count =0;
    for (int i = 0; name[i] !='\0'; i++)
    {
        count ++;

    }
    return count;
    
    
}

int main(){
    char name[20];
    cout<<"enter your name :?"<<endl;
    cin>>name;

    cout<<"your name is ";
    cout<<name<<endl;
    cout<<"length = "<<getlength(name)<<endl; 
     int len=getlength(name);
    reverses(name,len);
    cout<<"Your name in reverse :"<<name ;

return 0;

}