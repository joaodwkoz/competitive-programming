#include <iostream>
#include <vector>

using namespace std;

int dist(pair<int, int> a, pair<int, int> b) {
    return (b.first - a.first) * (b.first - a.first) + (b.second - a.second) * (b.second - a.second);
}

void dfs(vector<vector<int>>& adj, vector<bool>& visited, int at) {
    if (visited[at]) {
        return;
    } 

    visited[at] = true;

    for (auto viz : adj[at]) {
        dfs(adj, visited, viz);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    vector<vector<int>> adj(n);
    vector<pair<int, int>> trees(n);
    for (auto &x : trees) {
        cin >> x.first >> x.second;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist(trees[i], trees[j]) <= d * d) {
                adj[i].push_back(j);
            }
        }
    }

    vector<bool> visited(n, false);

    dfs(adj, visited, 0);

    for (auto val : visited) {
        if (!val) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}