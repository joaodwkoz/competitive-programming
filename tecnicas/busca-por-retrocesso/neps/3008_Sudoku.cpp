#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int mat[9][9];
bool rows[9][9], cols[9][9], blcks[9][9];
vector<pair<int, int>> emp;

bool solve(int used) {
    if (used == emp.size()) {
        return true;
    }

    int x = emp[used].first;
    int y = emp[used].second;
    int q = (x / 3) * 3 + (y / 3);

    for (int i = 1; i <= 9; i++) {
        if (!rows[x][i - 1] && !cols[y][i - 1] && !blcks[q][i - 1]) {
            mat[x][y] = i;

            rows[x][i - 1] = true;
            cols[y][i - 1] = true;
            blcks[q][i - 1] = true;

            if (solve(used + 1)) {
                return true;
            }

            rows[x][i - 1] = false;
            cols[y][i - 1] = false;
            blcks[q][i - 1] = false;

            mat[emp[used].first][emp[used].second] = 0;
        }
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> mat[i][j];
            if (!mat[i][j]) {
                emp.emplace_back(i, j);
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (!mat[i][j]) {
                continue;
            }

            int q = (i / 3) * 3 + (j / 3);
            if (cols[j][mat[i][j] - 1] || rows[i][mat[i][j] - 1] || blcks[q][mat[i][j] - 1]) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }

            rows[i][mat[i][j] - 1] = true;
            cols[j][mat[i][j] - 1] = true;
            blcks[q][mat[i][j] - 1] = true;
        }
    }

    if (!emp.size() || solve(0)) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO SOLUTION" << endl;
    }

    return 0;
}