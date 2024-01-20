//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        
      long long moves = 0;
        // Base case: If there is only one disk, move it from 'from' to 'to'
        if (N == 1) {
            cout << "move disk 1 from rod " << from << " to rod " << to << endl;
            return 1;
        }

        // Move N-1 disks from 'from' to 'aux' using 'to' as auxiliary
        moves += toh(N - 1, from, aux, to);

        // Move the Nth disk from 'from' to 'to'
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        moves++;

        // Move the N-1 disks from 'aux' to 'to' using 'from' as auxiliary
        moves += toh(N - 1, aux, to, from);

        return moves;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends
