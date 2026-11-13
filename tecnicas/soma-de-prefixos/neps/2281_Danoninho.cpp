#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll d;
    cin >> n >> d;

    vector<ll> c(n);
    for (ll &x : c) {
        cin >> x;
    }

    vector<ll> pref(n + 1, 0);
    pref[0] = c[0];
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + c[i];
    }

    int ans = 0;
    for (int r = 1; r <= n; r++) {
        int l = lower_bound(pref.begin(), pref.begin() + r, pref[r] - d) - pref.begin();
        ans = max(ans, r - l);
    }

    cout << ans << endl;

    return 0;
}