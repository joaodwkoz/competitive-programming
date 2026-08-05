#include <iostream>
#include <vector>

using namespace std;

const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

vector<vector<int>> grid, visited;

int dfs(int x, int y, int n, int m) {
    if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || grid[x][y] == 1) {
        return 0;
    }

    visited[x][y] = 1;

    int ans = 1;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
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
    visited.assign(n, vector<int>(m, 0));
    for (int i = 1; i <= k; i++) {
        int a, b;
        cin >> a >> b;
        grid[a - 1][b - 1] = 1;
    }

    cout << dfs(x - 1, y - 1, n, m) << endl;

    return 0;
}