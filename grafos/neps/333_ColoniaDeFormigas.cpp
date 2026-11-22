#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;

const int LOG = 17;

void dfs(int v, int p, int w, vector<vector<pair<int, int>>>& adj, vector<vector<int>>& up, vector<vector<ll>>& s, vector<int>& prof) {
    up[v][0] = p;
    s[v][0] = w;

    for (int i = 1; i < LOG; i++) {
        up[v][i] = up[up[v][i - 1]][i - 1];
        s[v][i] = s[v][i - 1] + s[up[v][i - 1]][i - 1];
    }

    for (auto viz : adj[v]) {
        if (viz.first != p) {
            prof[viz.first] = prof[v] + 1;
            dfs(viz.first, v, viz.second, adj, up, s, prof);
        }
    }
}

int lca(int x, int y, vector<vector<int>>& up, vector<int>& prof) {
    if (prof[x] < prof[y]) {
        swap(x, y);
    } 

    for (int i = LOG - 1; i >= 0; i--) {
        if (prof[x] - (1 << i) >= prof[y]) {
            x = up[x][i];
        }
    }

    if (x == y) {
        return x;
    }

    for (int i = LOG - 1; i >= 0; i--) {
        if (up[x][i] != up[y][i]) {
            x = up[x][i];
            y = up[y][i];
        }
    }

    return up[x][0];
}

ll sum(int x, int prof, vector<vector<int>>& up, vector<vector<ll>>& s) {
    ll res = 0;

    for (int i = LOG - 1; i >= 0; i--) {
        if (prof >= (1 << i)) {
            res += s[x][i];
            x = up[x][i];
            prof -= (1 << i);
        }
    }

    return res;
}

ll total(int x, int y, vector<vector<int>>& up, vector<vector<ll>>& s, vector<int>& prof) {
    int z = lca(x, y, up, prof);
    return 1LL * sum (x, prof[x] - prof[z], up, s) + 1LL * sum (y, prof[y] - prof[z], up, s) ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n && n) {
        vector<vector<pair<int, int>>> adj(n + 1);

        int v, p;
        for (int i = 1; i < n; i++) {
            cin >> v >> p;
            adj[i].push_back({v, p});
            adj[v].push_back({i, p});
        }

        vector<vector<int>> up(n + 1, vector<int>(LOG));
        vector<vector<ll>> s(n + 1, vector<ll>(LOG));
        vector<int> prof(n + 1, 0);

        prof[0] = 0;
        dfs(0, 0, 0, adj, up, s, prof);

        int q;
        cin >> q;

        int x, y;
        for (int i = 1; i <= q; i++) {
            cin >> x >> y;
            cout << total(x, y, up, s, prof) << " ";
        }

        cout << endl;
    }

    return 0;
}