#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int mst(vector<vector<pair<int, int>>>& adj, int start) {
    int n = adj.size() - 1;
    
    vector<bool> vis(n + 1, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});

    int s = 0;
    while (!pq.empty()) {
        auto [p, v] = pq.top();
        pq.pop();

        if (vis[v]) {
            continue;
        }

        vis[v] = true;
        s += p;

        for (auto [u, w] : adj[v]) {
            if (!vis[u]) {
                pq.push({w, u});
            }
        }
    }

    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1);

    int x, y, p;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> p;
        adj[x].emplace_back(y, p);
        adj[y].emplace_back(x, p);
    }

    cout << mst(adj, 1) << endl;

    return 0;
}