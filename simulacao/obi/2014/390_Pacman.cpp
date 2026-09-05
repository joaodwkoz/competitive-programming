#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> mat(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int ans = -1e9, f = 0;
    for (int i = 0; i < n; i++) {
        if (!(i % 2)) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 'o') {
                    f++;
                } else if (mat[i][j] == 'A') {
                    ans = max(ans, f);
                    f = 0;
                }
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                if (mat[i][j] == 'o') {
                    f++;
                } else if (mat[i][j] == 'A') {
                    ans = max(ans, f);
                    f = 0;
                }
            }
        }
    }
    ans = max(ans, f);

    cout << ans << endl;

    return 0;
}