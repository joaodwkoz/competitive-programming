#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> l1(k, 0), l2(k, 0);

    int idx = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x) {
            l1[idx++] = i;
        }
    }

    idx = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x) {
            l2[idx++] = i;
        }
    }

    ll ans = 0;
    for (int i = 0; i < k; i++) {
        ans += 1LL * abs(l1[i] - l2[i]);
    }

    cout << ans << endl;

    return 0;
}
