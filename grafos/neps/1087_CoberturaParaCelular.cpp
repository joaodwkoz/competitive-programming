#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int dist(pair<int, int> &a, pair<int, int> &b) {
    int x = a.first - b.first, y = a.second - b.second;
    return  x * x + y * y;
}

void dfs(vector<vector<int>> &adj, vector<int> &vis, int v) {
    if (vis[v]) {
        return;
    }

    vis[v] = true;

    for (auto viz : adj[v]) {
        dfs(adj, vis, viz);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> ilhs(n);
    for (auto &x : ilhs) {
        cin >> x.first >> x.second;
    }

    int a;
    cin >> a;

    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dist(ilhs[i], ilhs[j]) <= a * a) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    vector<int> vis(n, 0);
    dfs(adj, vis, 0);

    for (int val : vis) {
        if (!val) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}