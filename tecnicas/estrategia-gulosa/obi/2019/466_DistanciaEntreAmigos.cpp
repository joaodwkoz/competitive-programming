#include <iostream>

using namespace std;

typedef long long ll;

const int MAXN = 2e5 + 10;

int prds[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> prds[i];
    }

    ll ans = 0;
    ll best = prds[0];
    for (int i = 1; i < n; i++) {
        ans = max(ans, best + prds[i] + i);
        best = max(best, 1LL * prds[i] - i);
    }

    cout << ans << endl;

    return 0;
}