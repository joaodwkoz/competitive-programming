#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, t;
    cin >> c >> t;

    vector<int> rs(c);
    for (int &x : rs) {
        cin >> x;
    }

    vector<pair<int, int>> ts(t);
    for (auto &x : ts) {
        cin >> x.first >> x.second;
    }

    ll ans = 0;
    for (auto ti : ts) {
        int x = ti.first, y = ti.second;
        ll sqDist = 1LL * x * x + 1LL * y * y;

        int l = 0, h = c - 1, v = -1;
        while (l <= h) {
            int m = l + (h - l) / 2;

            if( sqDist <= 1LL * rs[m] * rs[m]) {
                v = m;
                h = m - 1;
            } else {
                l = m + 1;
            }
        }

        if (v != -1) {
            ans += (c - v);
        }
    }

    cout << ans << endl;

    return 0;
}