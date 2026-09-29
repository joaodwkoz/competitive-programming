
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<int> dist;

void bfs(int st, int mx, vector<bool> &can) {
    dist[st] = 0;

    queue<int> q;
    q.push(st);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int u : adj[v]) {
            if (dist[u] == -1) {
                q.push(u);
                dist[u] = dist[v] + 1;
                if (dist[u] <= mx && u != st) {
                    can[u] = true;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, e, l, p, tc = 1;
    while (cin >> c >> e >> l >> p && c && e && l && p) {
        adj.assign(c + 1, {});
        dist.assign(c + 1, -1);

        vector<bool> can(c + 1, false);

        for (int i = 0; i < e; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        bfs(l, p, can);

        cout << "Teste " << tc++ << endl;
        for (int i = 1; i <= c; i++) {
            if (can[i]) {
                cout << i << " ";
            }
        }
        cout << endl << endl;
    }

    return 0;
}