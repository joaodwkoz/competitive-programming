#include <iostream>
#include <vector>

using namespace std;

int directionEnemies(vector<vector<char>>& grid, int x, int y, int xdir, int ydir) {
    int enem = 0;
    
    while (x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size() && grid[x][y] != '#') {
        if (grid[x][y] == '@') enem++;
        x += xdir;
        y += ydir;
    }

    return enem;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) { 
        int n, m;
        cin >> n >> m;

        vector<vector<char>> grid(n, vector<char>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        int bs_x = -1, bs_y = -1, mx = -1e9;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '.') {
                    int enem = directionEnemies(grid, i, j, -1, 0) + directionEnemies(grid, i, j, 1, 0) + directionEnemies(grid, i, j, 0, -1) + directionEnemies(grid, i, j, 0, 1);
                    if (enem > mx) {
                        bs_x = i;
                        bs_y = j;
                        mx = enem;
                    }
                }
            }
        }

        cout << bs_x << ", " << bs_y << endl;
    }

    return 0;
}