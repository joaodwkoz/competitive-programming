#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> dist;

void djikstra(int st) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    pq.push({ 0, st });
    dist[st] = 0;

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) {
            continue;
        } 

        for (auto &viz : adj[u]) {
            auto [v, w] = viz;
            
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({ dist[v], v });
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);

    int u, v, w;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({ v, w });
        adj[v].push_back({ u, w });
    }

    int x;
    cin >> x;

    dist.assign(n + 1, 1e9);
    
    djikstra(x);

    int mx = -1e9, mn = 1e9;
    for (int i = 1; i <= n; i++) {
        if (i == x){
            continue;    
        }
        mx = max(mx, dist[i]);
        mn = min(mn, dist[i]);
    }

    cout << mx - mn << endl;

    return 0;
}