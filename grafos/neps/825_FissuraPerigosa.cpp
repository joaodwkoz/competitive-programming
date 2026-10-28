#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>>& grid, vector<vector<int>>& visited, int x, int y, int f, int n) {
    if (x >= n || x < 0 || y >= n || y < 0 || visited[x][y]) {
        return;
    } 

    visited[x][y] = 1;
    grid[x][y] = '*';

    if (x + 1 < n && !visited[x + 1][y] && grid[x + 1][y] - '0' <= f) {
        dfs(grid, visited, x + 1, y, f, n);
    }

    if (y + 1 < n && !visited[x][y + 1] && grid[x][y + 1] - '0' <= f) {
        dfs(grid, visited, x, y + 1, f, n);
    }

    if (x > 0 && !visited[x - 1][y] && grid[x - 1][y] - '0' <= f) { 
        dfs(grid, visited, x - 1, y, f, n);
    }
    
    if (y > 0 && !visited[x][y - 1] && grid[x][y - 1] - '0' <= f) {
        dfs(grid, visited, x, y - 1, f, n);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, f;
    cin >> n >> f;

    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<vector<char>> grid(n, vector<char>(n, '0'));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    if (grid[0][0] - '0' <= f) {
        dfs(grid, visited, 0, 0, f, n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
        }

        cout << endl;
    }

    return 0;
}