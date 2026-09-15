#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<int> cs;

bool dfs(int v, int p, int d, int c) {
    if (v == d) {
        cs[v] = c;
        return true;
    }

    for (auto viz : adj[v]) {
        if (viz != p) {
            if (dfs(viz, v, d, c)) {
                cs[v] = c;
                return true;
            }
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    cs.assign(n + 1, 0);

    int x, y;
    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= m; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        dfs(x, x, y, c);
    }

    for (int i = 1; i <= n; i++) {
        cout << cs[i] << " ";
    }

    return 0;
}