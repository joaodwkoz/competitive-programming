#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> b(n);
    for (int &x : b) cin >> x;

    vector<int> poss_remove;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i]) {
            ans += 1LL * a[i] - 1LL * b[i];
            poss_remove.push_back(b[i]);
        } else {
            poss_remove.push_back(a[i]);
        }
    }

    sort(poss_remove.begin(), poss_remove.end(), greater<>());

    for (int i = 0; i <= k; i++) {
        ans += 1LL * (poss_remove.size() >= i + 1 ? poss_remove[i] : 0);
    }

    cout << ans << endl;

    return 0;
}