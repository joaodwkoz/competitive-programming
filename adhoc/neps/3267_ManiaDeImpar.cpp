#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (auto &row : grid) {
        for (auto &col : row) {
            cin >> col;
        }
    }

    int ans0 = 0, ans1 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j + 1) % 2 == grid[i][j] % 2) {
                ans1++;
            } else if ((i + j) % 2 == grid[i][j] % 2) {
                ans0++;
            }
        }
    }
    
    cout << min(ans0, ans1) << endl;

    int rule = ans0 < ans1 ? 0 : 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (rule == 1 && (i + j + 1) % 2 == grid[i][j] % 2) {
                grid[i][j]++;
            } else if (rule == 0 && (i + j) % 2 == grid[i][j] % 2) {
                grid[i][j]++;
            }

            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}