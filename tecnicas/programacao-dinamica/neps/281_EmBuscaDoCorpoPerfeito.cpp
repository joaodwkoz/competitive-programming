#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, n;
    cin >> c >> n;

    vector<pair<int, int>> cuts(n);
    for (auto &x : cuts) {
        cin >> x.first >> x.second;
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(c + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            dp[i][j] = dp[i - 1][j];
            
            if (j >= cuts[i - 1].first) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - cuts[i - 1].first] + cuts[i - 1].second);
            }
        }
    }

    cout << dp[n][c] << endl;

    return 0;
}