#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

vector<vector<int>> grid, dist;

bool isValid(int x, int y) {
    return x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && dist[x][y] == -1 && grid[x][y] != 2;
}

int bfs(pair<int, int> &st) {
    queue<pair<int, int>> q;

    q.push(st);
    dist[st.first][st.second] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (!grid[x][y]) {
            return dist[x][y];
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (isValid(nx, ny)) {
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
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

    pair<int, int> st;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 3) {
                st.first = i;
                st.second = j;
            }
        }
    }

    cout << bfs(st) << endl;

    return 0;
}