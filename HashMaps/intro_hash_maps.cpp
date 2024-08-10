#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation
        unordered_map<string,int>m;
    //isertion
        pair<string,int>p=make_pair("babbar",3);
        m.insert(p);


    //2nd type
        pair<string,int> pair2("love",2);
        m.insert(pair2);


    //3rd type
        m["mera"]=1;
        m["mera"]=2;

    //searching
        cout<<m["mera"]<<endl;
        cout<<m.at("babbar")<<endl;


    //to check presence
    cout<<m.count("love");

    //erase 
    m.erase("love");
     
    //itreator
    unordered_map<string,int>::iterator it=m.begin();

    while(it !=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;

    }
        return 0;

}