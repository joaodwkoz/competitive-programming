#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& adj, vector<int>& visited, int v) {
    visited[v] = 1;

    for (int viz : adj[v]) {
        if (!visited[viz]) {
            dfs(adj, visited, viz);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int e, l, tc = 1;
    while (cin >> e >> l && e && l) {
        vector<vector<int>> adj(e + 1);
        vector<int> visited(e + 1, 0);

        int x, y;
        for (int i = 1; i <= l; i++) { 
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        dfs(adj, visited, 1);

        bool ok = true;
        for (int i = 1; i <= e; i++) {
            if (!visited[i]) {
                ok = false;
                break;
            }
        }

        cout << "tc " << tc++ << endl << (ok ? "normal" : "falha") << endl << endl;
    }

    return 0;
}