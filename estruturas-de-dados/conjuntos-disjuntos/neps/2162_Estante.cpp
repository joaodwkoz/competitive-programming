#include <iostream>
#include <vector>

using namespace std;

vector<int> rep;
vector<int> sz;

int find(int x) {
    if (rep[x] == x) {
        return x;
    } 
    return rep[x] = find(rep[x]);
}

void unite(int x, int y) {
    int rx = find(x), ry = find(y);
    if (rx != ry) {
        if (sz[rx] < sz[ry]) {
            rep[rx] = ry;
            sz[ry] += sz[rx];
        } else {
            rep[ry] = rx;
            sz[rx] += sz[ry];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, k;
    cin >> n >> r >> k;

    rep.resize(n + 1);
    sz.assign(n + 1, 1);
    for (int i = 1; i <= n; i++) {
        rep[i] = i;
    } 

    for (int i = 1; i <= r; i++) {
        int x, y;
        cin >> x >> y;
        unite(x, y);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (find(i) == i) {
            ans += (sz[i] + k - 1) / k;
        }
    }

    cout << ans << endl;

    return 0;
}