#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int x, y;
};

struct NodeQueue {
    int s, x, y;
};

struct Comp {
    bool operator()(const NodeQueue& a, const NodeQueue& b) const {
        return a.s > b.s;
    }
};

int dX[4] = {-1, 1, 0, 0};
int dY[4] = {0, 0, 1, -1};

int dijkstra(vector<vector<int>>& mat, Node st, Node end) {
    int n = mat.size(), m = mat[0].size();

    vector<vector<int>> dist(n, vector<int>(m, 10e9));
    dist[st.x][st.y] = mat[st.x][st.y];

    priority_queue<NodeQueue, vector<NodeQueue>, Comp> pq;
    pq.push({ mat[st.x][st.y], st.x, st.y });

    while (!pq.empty()) {
        auto [s, x, y] = pq.top();
        pq.pop();

        if (s > dist[x][y]) {
            continue;
        } 

        if (x == end.x && y == end.y) {
            return s;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dX[i], ny = y + dY[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && mat[nx][ny] != -1) {
                int nS = dist[x][y] + (nx == end.x && ny == end.y ? 0 : mat[nx][ny]);

                if (nS < dist[nx][ny]) {
                    dist[nx][ny] = nS;
                    pq.push({nS, nx, ny});
                }
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, d;
    cin >> n >> m >> d;

    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
        
    Node st, end;
    cin >> st.x >> st.y >> end.x >> end.y;

    st.x--; st.y--; end.x--; end.y--;

    int ans = d / dijkstra(mat, st, end);

    cout << ans << endl;

    return 0;
}