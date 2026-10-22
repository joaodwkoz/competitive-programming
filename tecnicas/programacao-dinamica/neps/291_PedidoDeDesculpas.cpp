#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, f, tc = 1;

    while (cin >> c >> f && c && f) {
        vector<pair<int, int>> s(f);

        for (auto &x : s) {
            cin >> x.first >> x.second;
        }

        vector<int> dp(c + 1, 0);
        for (int i = 0; i < f; i++) {
            for (int j = c; j >= s[i].first; j--) {
                dp[j] = max(dp[j], dp[j - s[i].first] + s[i].second);
            }
        }

        cout << "Teste " << tc++ << endl << dp[c] << endl << endl;
    }

    return 0;
}