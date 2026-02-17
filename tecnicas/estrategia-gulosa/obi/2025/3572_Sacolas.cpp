#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    ll curr = 0;
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (curr + 1LL * x <= s) {
            curr += x;
        } else {
            curr = 1LL * x;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}