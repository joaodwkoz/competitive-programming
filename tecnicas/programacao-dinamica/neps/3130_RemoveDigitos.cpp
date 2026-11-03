#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        for (char s : to_string(i)) {
            dp[i] = min(dp[i], 1 + dp[i - (s - '0')]);
        }
    }

    cout << dp[n] << endl;

    return 0;
}