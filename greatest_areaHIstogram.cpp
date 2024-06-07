#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<int> nextSmallerElement(long long arr[], int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--) {
            long long curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(long long arr[], int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            long long curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

public:
    long long getMaxArea(long long arr[], int n) {
        vector<int> next = nextSmallerElement(arr, n);
        vector<int> prev = prevSmallerElement(arr, n);

        long long maxArea = 0;
        for(int i = 0; i < n; i++) {
            long long height = arr[i];
            if(next[i] == -1) {
                next[i] = n;
            }
            long long width = next[i] - prev[i] - 1;
            long long area = height * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};

// Example usage
int main() {
    Solution sol;
    long long arr[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum area: " << sol.getMaxArea(arr, n) << endl;
    return 0;
}
