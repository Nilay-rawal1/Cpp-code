//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
         std::unordered_set<int> seen;
    int result = INT_MAX;
     for (int i = n - 1; i >= 0; i--) {
        if (seen.find(arr[i]) != seen.end()) {
            result = i + 1;  // Update result with the current index
        } else {
            seen.insert(arr[i]);  // Add the element to the set
        }
    }

    return (result == INT_MAX) ? -1 : result;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends
