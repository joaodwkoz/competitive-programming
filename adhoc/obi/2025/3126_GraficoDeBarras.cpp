#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mx = -1;
    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
        mx = max(mx, x);
    }

    vector<vector<int>> grid(mx, vector<int>(n));
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        for (int j = mx - 1; j >= mx - x; j--) {
            grid[j][i] = 1;
        }
    }

    for (auto row : grid) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}