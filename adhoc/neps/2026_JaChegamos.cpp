#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    vector<vector<int>> grid(5, vector<int>(5, 0));
    for (int i = 1; i < 5; i++) {
        grid[0][i] = grid[0][i - 1] + arr[i - 1];
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j < i) {
                grid[i][j] = grid[i - 1][j] + arr[i - 1];
            } else {
                grid[i][j] = grid[i - 1][j] - arr[i - 1];
            }
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