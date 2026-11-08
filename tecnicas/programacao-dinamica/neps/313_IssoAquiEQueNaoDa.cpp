#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> m(n);
    for (int &x : m) {
        cin >> x;
    }

    vector<bool> dp(t + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= t; j++) {
            if (j >= m[i]) {
                dp[j] = dp[j] || dp[j - m[i]];
            }
        }
    }

    int ans = 0;
    for (int i = 1; i < t; i++) {
        if (!dp[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}