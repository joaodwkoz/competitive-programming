#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> adj;
vector<int> vis;

void farthest(int node, int dist, pair<int, int> &f) {
    if (vis[node]) {
        return;
    }

    vis[node] = 1;

    if (dist > f.second) {
        f = {node, dist};
    } 

    for (auto e : adj[node]) {
        farthest(e, dist + 1, f);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    adj.resize(n + 1);
    vis.resize(n + 1);

    int x, y;
    for (int i = 1; i <= n - 1; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    pair<int, int> f = {1, 0};

    farthest(1, 0, f);
    
    f.second = 0;

    fill(vis.begin(), vis.end(), 0);

    farthest(f.first, 0, f);

    cout << f.second << endl;

    return 0;
}