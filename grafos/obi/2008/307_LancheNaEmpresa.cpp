#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

vector<vector<pair<int, int>>> adj;

struct Comp {
    bool operator ()(const pair<int, int> &a, const pair<int, int> &b) const {
        return a.second > b.second;
    }
};

int longestDist(int st, int n) {
    int mx = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq;
    pq.push({ st, 0 });

    vector<int> dist(n + 1, 1e9);
    dist[st] = 0;

    while (!pq.empty()) {
        auto [v, d] = pq.top();
        pq.pop();

        if (dist[v] < d) {
            continue;
        }

        for (auto [u, w] : adj[v]) {
            if (dist[u] > dist[v] + w) {
                dist[u] = dist[v] + w;
                pq.push({ u, dist[u] });
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        mx = max(mx, dist[i]);
    } 

    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, c;
    cin >> s >> c;

    adj.resize(s + 1);

    int x, y, z;
    for (int i = 1; i <= c; i++) {
        cin >> x >> y >> z;
        adj[x].push_back({y, z});
        adj[y].push_back({x, z});
    }
    
    int mn = 1e9;
    for (int i = 1; i <= s; i++) {
        int d = longestDist(i, s);
        mn = min(mn, d);
    }

    cout << mn << endl;

    return 0;
}