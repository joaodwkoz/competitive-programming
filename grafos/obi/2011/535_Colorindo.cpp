#include <iostream>
#include <vector>

using namespace std;

const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

vector<vector<int>> grid, vis;

int dfs(int x, int y, int n, int m) {
    if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || grid[x][y] == 1) {
        return 0;
    }

    vis[x][y] = 1;

    int ans = 1;
    
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        ans += dfs(nx, ny, n, m);
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, y, k;
    cin >> n >> m >> x >> y >> k;

    grid.assign(n, vector<int>(m));
    vis.assign(n, vector<int>(m));

    int a, b;
    for (int i = 1; i <= k; i++) {
        cin >> a >> b;
        grid[a - 1][b - 1] = 1;
    }

    cout << dfs(x - 1, y - 1, n, m) << endl;

    return 0;
}