#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        cin >> mat[0][i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (mat[i - 1][j] == mat[i - 1][j + 1]) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = -1;
            }
        }
    }

    cout << (mat[n - 1][0] == 1 ? "preta" : "branca") << endl;

    return 0;
}