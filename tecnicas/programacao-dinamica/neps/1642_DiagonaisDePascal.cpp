#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
     
    vector<int> dp(n + 1, 0);
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] % MOD + dp[i - 2] % MOD) % MOD;
    }

    cout << dp[n] << endl;

    return 0;
}