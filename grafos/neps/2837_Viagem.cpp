#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 10;
const int LOG = 17;

vector<vector<int>> adj(MAXN), up(MAXN, vector<int>(LOG));
vector<vector<ll>> fr(MAXN, vector<ll>(LOG));
vector<int> prof(MAXN);
vector<ll> fs(MAXN, 0LL);

void dfs(int v, int p, ll w) {
    up[v][0] = p;
    fr[v][0] = w;

    for (int i = 1; i < LOG; i++) {
        up[v][i] = up[up[v][i - 1]][i - 1];
        fr[v][i] = fr[up[v][i - 1]][i - 1] ^ fr[v][i - 1];
    }

    for (int viz : adj[v]) {
        if (viz != p) {
            prof[viz] = prof[v] + 1;
            dfs(viz, v, fs[viz]);
        }
    }
}

int lca(int x, int y) {
    if (prof[x] < prof[y]) {
        swap(x, y);
    }

    for (int i = LOG - 1; i >= 0; i--){
        if(prof[x] - (1 << i) >= prof[y]){
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

ll getf(int x, int d) {
    ll res = 0;

    for (int i = LOG - 1; i >= 0; i--) {
        if (d >= (1 << i)) {
            res ^= fr[x][i];
            d -= (1 << i);
            x = up[x][i];
        }
    }

    return res;
}

int total(int x, int y) {
    int w = lca(x, y);

    ll fl = getf(x, prof[x] - prof[w]);
    ll fr = getf(y, prof[y] - prof[w]);

    ll diff = fl ^ fr ^ fs[w];

    return __builtin_popcountll(diff);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int x, y;
    for (int i = 1; i < n; i++) { 
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll z;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> z;
            fs[i] |= ((x) << j);
        }
    }

    dfs(1, 1, fs[1]);

    int q;
    cin >> q;

    for (int i = 1; i <= q; i++) {
        cin >> x >> y;
        cout << total(x, y) << endl;
    }

    return 0;
}