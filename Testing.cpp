#include<bits/stdc++.h>
using namespace std;

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
         int left = 0 , right = c - 1;
        int top = 0 , bottom = r - 1;
        vector<int> ans;
        
        while (top <= bottom && left <= right) {
            //  right
            for (int i = left; i <= right; ++i)
                ans.push_back(matrix[top][i]);
            top++;
            
            // down
            for (int i = top; i <= bottom; ++i)
                ans.push_back(matrix[i][right]);
            right--;
            
            //  left
            if (top <= bottom) { 
                for (int i = right; i >= left; --i)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            
            //  up
            if (left <= right) { 
                for (int i = bottom; i >= top; --i)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};

int main (){



    return 0;
}