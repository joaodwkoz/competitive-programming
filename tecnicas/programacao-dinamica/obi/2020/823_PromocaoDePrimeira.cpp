#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<vector<pair<int, int>>> adj;
int n, ans = -1e9;

pair<int, int> dfs(int p, int v) {
    int bc0 = 1;
    int bc1 = 1;

    for (auto viz : adj[v]) {
        if (viz.first == p) {
            continue;
        }

        if (viz.second == 0) {
            bc0 = max(bc0, 1 + dfs(v, viz.first).second);
        } else {
            bc1 = max(bc1, 1 + dfs(v, viz.first).first);
        }
    }

    ans = max(ans, bc0 + bc1 - 1);

    return { bc0, bc1 };
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    adj.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        int a, b, e;
        cin >> a >> b >> e;
        adj[a].push_back({b, e});
        adj[b].push_back({a, e});
    }

    dfs(-1, 1);

    cout << ans << endl;
    
    return 0;
}