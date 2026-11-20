#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<int> figs;

void bfs(vector<int>& t, int st, int n) {
    vector<bool> vis(n + 1, false);
    vis[st] = true;

    queue<int> q;
    q.push(st);

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        t[v] |= figs[v];

        for (auto viz : adj[v]) {
            if (!vis[viz]) {
                vis[viz] = true;
                t[viz] |= t[v];
                q.push(viz);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, st;
    cin >> n >> st;

    adj.resize(n + 1);
    figs.assign(n + 1, 0);

    int k, x, y;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        for (int j = 1; j <= k; j++) {
            cin >> x;
            figs[i] |= (1 << (x - 1));
        }
    }

    for (int i = 1; i < n; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int q;
    cin >> q;

    vector<int> qs(q);
    for (int &qr : qs) {
        cin >> qr;
    }

    vector<int> t(n + 1, 0);

    bfs(t, st, n);

    for (int qr : qs) {
        cout << __builtin_popcount(t[qr]) << endl;
    }

    return 0;
}