#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<bool>> comp(n, vector<bool>(n, true));
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        comp[x - 1][y - 1] = comp[y - 1][x - 1] = false;
    }

    int ans = 0;
    for (int mask = 1; mask < (1 << n); mask++) {
        bool valid = true;

        for (int i = 0; i < n; i++) {
            if (!(mask & (1 << i))) {
                continue;
            }

            for (int j = i + 1; j < n; j++) {
                if (mask & (1 << j)) {
                    if (!comp[i][j]) {
                        valid = false;
                        break;
                    }
                }
            }
        }

        if (valid) {
            ans++;
        } 
    }

    cout << ans << endl;

    return 0;
}