/*here is leet code problem buy chocolate */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans=INT_MAX;
        int rem;

        for(int i=0;i<prices.size();i++){
            for (int j=0;j<prices.size();j++){
                if(i!=j){
                    int sum=prices[i]+prices[j];
                    ans=min(ans,sum);
                }
            }
        }

        rem=money-ans;
        if(rem>=0){
            return  rem;
        }
        else{
            return money;
        }
    }
};