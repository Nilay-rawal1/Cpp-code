#include<bits/stdc++.h>
using namespace std;


void reverse(string& str,int i, int j){
    //base case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);

    i++;
    j--;
    reverse(str,i,j);
}


int main(){

    string name="nilay";

   reverse(name,0,name.length()-1);

   cout<<name<<endl;


    return 0;

}