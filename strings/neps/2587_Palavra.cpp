#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, c;
        cin >> l >> c;

        vector<vector<char>> grid(l, vector<char>(c, 0));
        for (auto &row : grid) {
            for (auto &col : row) {
                cin >> col;
            }
        }

        int ans = 0;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == 'w') {
                    string fr, bc, up, dw, diag_frdw, diag_frup, diag_bcdw, diag_bcup;
                    fr = bc = up = dw = diag_frdw = diag_frup = diag_bcdw = diag_bcup = "";

                    for (int k = j; k < min(j + 4, c); k++) fr += string(1, grid[i][k]);
                    for (int k = j; k >= max(0, j - 3); k--) bc += string(1, grid[i][k]);

                    for (int k = i; k < min(i + 4, l); k++) dw += string(1, grid[k][j]);
                    for (int k = i; k >= max(0, i - 3); k--) up += string(1, grid[k][j]);

                    for (int k = j, m = i; k < min(j + 4, c) && m < min(i + 4, l); k++, m++) diag_frdw += string(1, grid[m][k]);
                    for (int k = j, m = i; k < min(j + 4, c) && m >= max(0, i - 3); k++, m--) diag_frup += string(1, grid[m][k]);
                    for (int k = j, m = i; k >= max(0, j - 3) && m >= max(0, i - 3); k--, m--) diag_bcup += string(1, grid[m][k]);
                    for (int k = j, m = i; k >= max(0, j - 3) && m < min(i + 4, l); k--, m++) diag_bcdw += string(1, grid[m][k]);

                    string anss[8] = { fr, bc, dw, up, diag_frdw, diag_frup, diag_bcdw, diag_bcup };

                    for (string ansStr : anss) {
                        if (ansStr == "word") {
                            ans++;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}