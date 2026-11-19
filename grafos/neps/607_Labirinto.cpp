#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int t, x, y;
};

int dX[4] = {-1, 1, 0, 0};
int dY[4] = {0, 0, -1, 1};

int bfs(vector<vector<int>>& mat, int n, int m) {
    vector<vector<vector<bool>>> vis(n, vector<vector<bool>>(m, vector<bool>(10, false)));
    vis[0][0][0] = true;

    queue<Node> q;
    q.push({ 0, 0, 0 });

    while (!q.empty()) {
        auto [t, x, y] = q.front();
        q.pop();

        if (x == n - 1 && y == m - 1) {
            return t;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dX[i], ny = y + dY[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny][t % 10]) {
                int curr = (mat[x][y] + t) % 10, nxt = (mat[nx][ny] + t) % 10;

                if (nxt <= curr + 1) {
                    vis[nx][ny][t % 10] = true;
                    q.push({ t + 1, nx, ny });
                }
            }
        }

        vis[x][y][t % 10] = true;
        q.push({ t + 1, x, y });
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for (auto &r : mat) {
        for(auto &c : r) {
            cin >> c;
        }
    }
        
    cout << bfs(mat, n, m) << endl;

    return 0;
}