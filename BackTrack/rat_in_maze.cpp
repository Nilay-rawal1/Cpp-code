#include <bits/stdc++.h>
using namespace std;

bool issafe(int newx, int newy, vector<vector<bool>> &visited, vector<vector<int>> &arr, int n) {
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && 
        (visited[newx][newy] == 0 && arr[newx][newy] == 1)) {
        return true;
    } else {
        return false;
    }
}

void solve(int x, int y, vector<vector<int>> &arr, int n,
           vector<string> &ans, vector<vector<bool>> &visited, string path) {
    // Base case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the cell as visited
    visited[x][y] = true;

    // Down
    if (issafe(x + 1, y, visited, arr, n)) {
        solve(x + 1, y, arr, n, ans, visited, path + 'D');
    }

    // Left
    if (issafe(x, y - 1, visited, arr, n)) {
        solve(x, y - 1, arr, n, ans, visited, path + 'L');
    }

    // Right
    if (issafe(x, y + 1, visited, arr, n)) {
        solve(x, y + 1, arr, n, ans, visited, path + 'R');
    }

    // Up
    if (issafe(x - 1, y, visited, arr, n)) {
        solve(x - 1, y, arr, n, ans, visited, path + 'U');
    }

    // Unmark the cell as visited (backtrack)
    visited[x][y] = false;
}

vector<string> searchMaze(vector<vector<int>> &arr, int n) {
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    string path = "";
    solve(0, 0, arr, n, ans, visited, path);
    return ans;
}

