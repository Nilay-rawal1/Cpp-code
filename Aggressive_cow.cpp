//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
        bool ifpossible(vector<int> &stalls, int k,int mid){
    int cc=1;
    int ls=stalls[0];
    for(int i=0; i<stalls.size();i++){
        if(stalls[i]-ls>= mid){
            cc++;
            if(cc==k){
                return true;
            }
            ls=stalls[i];
        }
    }

    return false;
}
    
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0; i<stalls.size();i++ ){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int ans= -1;
    int mid= s+(e-s)/2;

    while(s<=e){

        if(ifpossible(stalls,k ,mid)){
            ans=mid;
            s=mid+1;

            
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
