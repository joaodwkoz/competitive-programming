#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, n, m;
    cin >> a >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (auto &row : grid) {
        for (auto &col : row) {
            cin >> col;
        }
    }

    int ans = -1;
    for (int i = 0; i < n; i++) {
        int st = -1, en = -1;

        for (int j = 0; j < m; j++) {
            if (!grid[i][j]) {
                if (st == -1) {
                    st = j;
                    en = -1;
                }
            } else {
                if (st != -1) {
                    en = j - 1;
                    if (en - st + 1 >= a) {
                        ans = n - i;
                        break;
                    }
                    st = -1;
                }
            }
        }

        if (en == -1 && st != -1) {
            en = m - 1;
        }

        if (en != -1 && st != -1 && en - st + 1 >= a) {
            ans = n - i;
        }
    }

    cout << ans << endl;

    return 0;
}