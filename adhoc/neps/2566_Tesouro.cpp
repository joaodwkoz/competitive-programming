#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    map<char, pair<int, int>> pos = {
        {'O', { 0, -1 }},
        {'L', { 0, 1 }},
        {'S', { 1, 0 }},
        {'N', { -1, 0 }},
    };

    vector<vector<char>> startGrid(n, vector<char>(n, '.'));
    for (auto &row : startGrid)
        for (auto &col : row)
            cin >> col;

    int a, b;
    cin >> a >> b;
    a--; b--;

    vector<vector<bool>> vis(n, vector<bool>(n, false)); 
    int tmr = 0;

    int x = a, y = b;

    while (true) {
        if (x < 0 || x >= n || y < 0 || y >= n) {
            cout << -1 << endl;
            return 0;
        } else if (vis[x][y]) {
            cout << 0 << endl;
            return 0;
        } else if (startGrid[x][y] == 'X') {
            cout << tmr << endl;
            return 0;
        }

        vis[x][y] = true;

        pair<int, int> dirs = pos[startGrid[x][y]];

        x += dirs.first;
        y += dirs.second;
        tmr++;
    }

    return 0;
}