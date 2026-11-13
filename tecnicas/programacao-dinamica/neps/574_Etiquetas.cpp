#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, c;
    cin >> n >> k >> c;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    } 

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + arr[i - 1];
    } 

    auto sum = [&](int l, int r){
        return pref[r + 1] - pref[l];
    };

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1e9));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }

        if (i >= c){
            for (int j = 0; j < k; j++) {
                if (dp[i - c][j] != -1e9) {
                    int s = sum(i - c, i - 1);
                    dp[i][j + 1] = max(dp[i][j + 1], dp[i - c][j] - s);
                }
            }
        }
    }

    cout << pref[n] + dp[n][k] << endl;

    return 0;
}