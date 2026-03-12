#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1e1 + 5;

int grid[MAXN][MAXN];
int cols[MAXN];
int rows[MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            cols[j] += grid[i][j];
            rows[i] += grid[i][j];
        }
    }

    int diag = 0, diag2 = 0; 
    for (int i = 0; i < n; i++) {
        diag += grid[i][i];
        diag2 += grid[i][n - i - 1];
    }

    vector<int> vals = { diag, diag2 };
    for (int i = 0; i < n; i++) {
        vals.push_back(cols[i]);
        vals.push_back(rows[i]);
    }

    int lst = -1;
    for (int val : vals) {
        if (val != lst && lst != -1) {
            cout << -1 << endl;
            return 0;
        }
        lst = val;
    }

    cout << lst << endl;

    return 0;
}