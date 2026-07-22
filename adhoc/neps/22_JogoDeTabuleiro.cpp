#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    for (int i  = 0; i < n; i++) {
         for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int p = (int)(mat[i - 1][j - 1] == 1) + (int)(mat[i - 1][j] == 1) + (int)(mat[i][j - 1] == 1);
            int b = (int)(mat[i - 1][j - 1] == 0) + (int)(mat[i - 1][j] == 0) + (int)(mat[i][j - 1] == 0);
            mat[i][j] = (int)(p <= b);
        }
    }

    cout << mat[n - 1][n - 1] << endl;

    return 0;
}