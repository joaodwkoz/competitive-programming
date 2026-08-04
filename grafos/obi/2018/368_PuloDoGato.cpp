#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

const int dx[25] = {-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
const int dy[25] = {-2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2};

vector<vector<int>> grid, dist;

int minDist(int ix, int iy) {
    int n = grid.size(), m = grid[0].size();

    queue<pair<int, int>> q;
    q.push({ix, iy});
    dist[ix][iy] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x + 1 == n && y + 1 == m) {
            return dist[x][y];
        }

        for (int i = 0; i < 25; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    grid.assign(n, vector<int>(m));
    dist.assign(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j]; 
        }  
    }

    cout << minDist(0, 0) << endl;

    return 0;
}