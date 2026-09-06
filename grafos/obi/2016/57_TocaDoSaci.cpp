#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

vector<vector<int>> lab;
int n, m;

int bfs(pair<int, int> &st) {
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;

    q.push(st);
    dist[st.first][st.second] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        int d = dist[x][y];
        if (lab[x][y] == 3) {
            return d;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && (lab[nx][ny] == 1 || lab[nx][ny] == 3) && dist[nx][ny] == -1) {
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

    cin >> n >> m;
    
    lab.assign(n, vector<int>(m));    

    pair<int, int> st;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> lab[i][j];
            if (lab[i][j] == 2) {
                st = {i, j};
            }
        }
    }

    cout << bfs(st) + 1 << endl;

    return 0;
}