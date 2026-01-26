#include <iostream>

using namespace std;

const int SIZE = 1000;

int mat[SIZE][SIZE];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c, m, n;
    cin >> l >> c >> m >> n;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    int ans = -1e9;
    for (int i = 0; i < l; i += m) {
        for (int j = 0; j < c; j += n) {
            int s = 0;
            for (int k = 0; k < m; k++) {
                for (int p = 0; p < n; p++) {
                    s += mat[i + k][j + p];
                }
            }
            ans = max(ans, s);
        }
    }

    cout << ans << endl;

    return 0;
}