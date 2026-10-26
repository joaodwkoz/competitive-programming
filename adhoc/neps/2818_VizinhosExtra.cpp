#include <iostream>
#include <vector>

using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    for (auto &r : mat) {
        for (auto &c : r) {
            cin >> c;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j]) {
                mat[i][j] = 0;
                
                for (int k = 0; k < 4; k++) {
                    int ni = i + dx[k], nj = j + dy[k];

                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && mat[i + dx[k]][j + dy[k]]) {
                        mat[i][j] += 1;
                    }
                } 
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}