// leet code ques 
// remove all occrence of substring

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0&& s.find(part)< s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main(){
string  a ; string b;
cout<<"enter the string ";
cin>> a;    
cout<<"enter the part";
cin>> b;
 string removeOccurrences( );
}