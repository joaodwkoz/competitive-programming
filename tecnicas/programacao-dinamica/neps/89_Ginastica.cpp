#include <iostream>
#include <vector>

using namespace std;

const int MOD = (int) 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, m, n;
    cin >> t >> m >> n;

    vector<vector<int>> dp(t + 1, vector<int>(n + 1, 0));

    for (int i = m; i <= n; i++) {
        dp[1][i] = 1;
    }

    for (int i = 1; i <= t; i++) {
        for (int j = m; j <= n; j++) {
            if (j - 1 >= m) {
                dp[i][j - 1] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
            }

            if (j + 1 <= n) {
                dp[i][j + 1] = (dp[i][j + 1] + dp[i - 1][j]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int i = m; i <= n; i++) {
        ans = (ans + dp[t][i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}