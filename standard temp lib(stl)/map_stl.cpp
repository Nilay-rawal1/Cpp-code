#include<iostream>
#include<map>
using namespace std;
// data stores in key values 
//also in sorted order
//all keys are unique  & it point to one values

int main (){

    map<int,string> m;
    m[1]="Nilay";
    m[2]="Rawal";
    m[13]="student";
    m.insert({5,"VIT Bhopal"});
// time complexcity is O(log n), red black tree & AVL tree used for formation of maps

    for( auto i:m){ 
        cout<<i.first<<" "<<i.second<<endl;
    } cout<<endl;


    cout<<"finding element "<<m.count(13);

    return 0;
}