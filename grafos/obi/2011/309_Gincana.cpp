#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000;

vector<int> adj[MAX];
vector<bool> vis(MAX);

void dfs(int v) {
    vis[v] = true;
    for (int viz : adj[v]) {
        if (!vis[viz]) {
            dfs(viz);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            ans++;
            dfs(i);
        }
    }

    cout << ans << endl;

    return 0;
}