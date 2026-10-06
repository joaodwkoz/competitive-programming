#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

vector<vector<pair<int, int>>> adj;

void dijkstra(int st, vector<int> &dist) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, st});
    
    dist[st] = 0;

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) {
            continue;
        }

        for (auto viz : adj[u]) {
            auto [v, w] = viz;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    adj.resize(n +  2);

    int u, v, w;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> dist(n + 2, 1e9);

    dijkstra(0, dist);

    cout << dist[n + 1] << endl;

    return 0;
}