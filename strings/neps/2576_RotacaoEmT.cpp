#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<char>> grid(n, vector<char>(10, 0));
        for (auto &row : grid) {
            for (auto &col : row) {
                cin >> col;
            }
        }

        bool hasTSpin = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 10; j++) {
                if (i >= 1 && j >= 1 && i + 1 < n && j + 1 < 10) {
                    string cl = string(1, grid[i - 1][j - 1]) + string(1, grid[i - 1][j]) + string(1, grid[i - 1][j + 1]);
                    string md = string(1, grid[i][j - 1]) + string(1, grid[i][j]) + string(1, grid[i][j + 1]);
                    string flr = string(1, grid[i + 1][j - 1]) + string(1, grid[i + 1][j]) + string(1, grid[i + 1][j + 1]);

                    if ((cl == "#.." || cl == "..#") && md == "..." && flr == "#.#") {
                        hasTSpin = true;
                        break;
                    }
                }
            }

            if (hasTSpin) {
                break;
            }
        }

        cout << (hasTSpin ? "T-Spin!!!" : "Missed it...") << endl;
    }

    return 0;
}