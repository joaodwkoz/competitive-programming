#include <iostream>
#include <vector>

using namespace std;

vector<int> par;
vector<int> rank_uf;

int find(int i) {
    if (par[i] == i) return i;
    return par[i] = find(par[i]);
}

void unite(int i, int j) {
    int irep = find(i);
    int jrep = find(j);

    if (irep == jrep) return;
    
    if (rank_uf[jrep] > rank_uf[irep]) {
        par[irep] = jrep;
    } else if (rank_uf[irep] > rank_uf[jrep]) {
        par[jrep] = irep;
    } else {
        par[jrep] = irep;
        rank_uf[irep]++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    par.assign(n + 1, 0);
    rank_uf.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        par[i] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char x;
            cin >> x;
            if (x == '1') {
                unite(i, j);
            }
        }
    }

    int e;
    cin >> e;

    vector<int> mark(n + 1, 0);
    for (int i = 1; i <= e; i++) {
        int k;
        cin >> k;

        bool hasFrs = false;
        for (int j = 1; j <= k; j++) {
            int x;
            cin >> x;
            int xrep = find(x);
            if (mark[xrep] == i) {
                hasFrs = true;
            }
            mark[xrep] = i;
        }
        cout << (hasFrs ? "S" : "N") << endl;
    }

    return 0;
}