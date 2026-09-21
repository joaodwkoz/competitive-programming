#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> vis, safe;

bool dfs(int x, int y, int n) {
    if (x >= n || x < 0 || y >= n || y < 0) {
        return false;
    }

    if (vis[x][y]) {
        return safe[x][y];
    }

    vis[x][y] = 1;
    safe[x][y] = 1;

    int dx = x, dy = y;

    if (grid[x][y] == 'A') {
        dx = x - 1;
    } else if (grid[x][y] == 'V') {
        dx = x + 1;
    } else if (grid[x][y] == '>') {
        dy = y + 1;
    } else if (grid[x][y] == '<') {
        dy = y - 1;
    }

    safe[x][y] = dfs(dx, dy, n);

    return safe[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    grid.resize(n, vector<char>(n));
    vis.assign(n, vector<bool>(n, false));
    safe.assign(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }   
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { 
            if (!vis[i][j]) {
                dfs(i, j, n);
            }
            ans += safe[i][j];
        }
    }

    cout << ans << endl; 

    return 0;
}