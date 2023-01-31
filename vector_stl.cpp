//vector is dynamic array (size manipuation )
// it is dynamic array. can change it's size as per requriment 
  
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    cout<<"size->"<<v.capacity()<<endl; 
    v.push_back(1);
     cout<<"size->"<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"size->"<<v.capacity()<<endl;
    v.push_back(3);
 
     cout<<"size->"<<v.capacity()<<endl;
     cout<<"size->"<<v.size()<<endl;


    return 0;
}