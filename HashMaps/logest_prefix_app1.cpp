#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
        string ans="";
    for(int i=0;i<arr[0].length();i++){
        char ch=arr[0][i];

        bool match=true;
        //for comparing with rest of strings
        for(int j=1;j<n;j++){

                if(arr[j].size()<i||ch!=arr[j][i]){
                    match=false;
                    break;
                }
        }
        if(match ==false)
        break;
        else
        ans.push_back(ch);
    }


    return ans;

    
}


