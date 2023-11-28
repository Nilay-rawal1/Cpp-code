// LeetCode problem:204:- Count Prime numbers,
// with time complexicity of o(log(log(n))
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
    
        //Sieve of Eratosthenes
        int cnt=0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return cnt;
        
    }
};
