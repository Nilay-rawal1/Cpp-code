#include <bits/stdc++.h>
using namespace std;

void addsoln(vector<vector<int>>& ans, vector<vector<int>>& board, int n) {
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp); // Add the current solution to the answer
}

bool issafe(int row, int col, vector<vector<int>>& board, int n) {
    int x = row;
    int y = col;

    // Check for the same row
    while (y >= 0) {
        if (board[x][y] == 1) {
            return false;
        }
        y--;
    }

    x = row;
    y = col;

    // Check for upper diagonal
    while (x >= 0 && y >= 0) {
        if (board[x][y] == 1) {
            return false;
        }
        x--;
        y--;
    }

    x = row;
    y = col;

    // Check for lower diagonal
    while (x < n && y >= 0) {
        if (board[x][y] == 1) {
            return false;
        }
        x++;
        y--;
    }

    return true;
}

void solve(int col, vector<vector<int>>& ans, vector<vector<int>>& board, int n) {
    // Base case
    if (col == n) {
        addsoln(ans, board, n);
        return;
    }

    // Solve 1 case and rest recursion will take care of
    for (int row = 0; row < n; row++) {
        if (issafe(row, col, board, n)) {
            // If placing queen is safe
            board[row][col] = 1;
            solve(col + 1, ans, board, n);
            // Backtrack
            board[row][col] = 0;
        }
    }
}

vector<vector<int>> nQueens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<int>> ans;
    solve(0, ans, board, n);
    return ans;
}

int main() {

    int n ; // Example: 4-Queens problem
    cout<<"enter the Number:  ";
    cin>>n;
    vector<vector<int>> result = nQueens(n);
    for (auto& solution : result) {
        for (int i = 0; i < solution.size(); i++) {
            cout << solution[i] << " ";
            if ((i + 1) % n == 0) cout << endl;
        }
        cout << endl;
    }
    return 0;
}
