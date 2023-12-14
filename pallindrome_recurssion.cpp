#include<bits/stdc++.h>

using namespace std;

bool checkPallindorme(string& str,int i ,int j){
    //base case
    if(i>j)
        return true;

    if(str[i]!=str[j])
        return false;
    else
        //recurssion
        return checkPallindorme(str,i+1,j-1);
}



int main(){
    string name ="abcba";

    cout<<endl;

    bool isPallindorme=checkPallindorme(name,0,name.length()-1);

    if(isPallindorme){
        cout<<"it is pallindrome";
    }
    else{
        cout<<"it is not,so sad 😂";
    }



    return 0;
}