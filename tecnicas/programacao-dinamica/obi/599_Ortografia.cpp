#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int dp[30][30];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    vector<string> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        int len = a[i].size();
        
        vector<string> eq;
        for (int j = 0; j < n; j++) {
            int dlen = d[j].size();

            if (abs(len - dlen) > 2) {
                continue;
            }

            for (int a = 0; a <= len; a++) {
                dp[a][0] = a;
            }
            for (int b = 0; b <= dlen; b++) {
                dp[0][b] = b;
            }

            for (int k = 1; k <= len; k++) {
                for (int l = 1; l <= dlen; l++) {
                    if (a[i][k - 1] == d[j][l - 1]) {
                        dp[k][l] = dp[k - 1][l - 1];
                    } else {
                        dp[k][l] = min(min(dp[k - 1][l], dp[k][l - 1]), dp[k - 1][l - 1]) + 1;
                    }
                }
            }

            if (dp[len][dlen] <= 2) {
                eq.push_back(d[j]);
            }
        }

        if (eq.size() != 0) {
            for(auto e : eq) {
                cout << e << " ";
            }
        }

        cout << endl;
    }

    return 0;
}