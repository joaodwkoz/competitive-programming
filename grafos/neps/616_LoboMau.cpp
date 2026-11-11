#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

vector<vector<char>> grid;
vector<vector<int>> vis;

int n, m;

pair<int, int> dfs(int x, int y) {
    if (x >= n || x < 0 || y >= m || y < 0 || vis[x][y] || grid[x][y] == '#') {
        return {0, 0};
    } 

    int w = 0, s = 0;

    vis[x][y] = 1;

    if (grid[x][y] == 'v') {
        w++;
    }

    if (grid[x][y] == 'k') {
        s++;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        auto res = dfs(nx, ny);

        w += res.first;
        s += res.second;
    }

    return {w, s}; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    grid.assign(n, vector<char>(m));
    vis.assign(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }   
    }

    int l = 0, o = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != '#' && !vis[i][j]) {
                pair<int, int> ans = dfs(i, j);

                if (ans.first >= ans.second) {
                    l += ans.first;
                } else {
                    o += ans.second;
                }
            }
        }
    }

    cout << o << " " << l << endl;

    return 0;
}