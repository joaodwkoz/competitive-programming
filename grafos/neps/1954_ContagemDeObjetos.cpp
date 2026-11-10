#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> grid;
vector<vector<bool>> vis;

int dX[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dY[] = {-1, -1, -1, 0, 1, 1, 1, 0};

void dfs(int l, int c, int x, int y, int lst) {
    if (x < 0 || x >= l || y < 0 || y >= c) {
        return;
    }

    if (vis[x][y]) {
        return;
    }

    if (grid[x][y] <= 128) {
        return;
    } 

    if (lst != -1 && abs(grid[x][y] - lst) > 10) {
        return;  
    } 

    vis[x][y] = true;
    for (int i = 0; i < 8; i++) {
        dfs(l, c, x + dX[i], y + dY[i], grid[x][y]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c;
    cin >> l >> c;

    grid.assign(l, vector<int>(c));
    vis.assign(l, vector<bool>(c, false));

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> grid[i][j];
        }
    }   
        
    int ans = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (grid[i][j] > 128 && !vis[i][j]) {
                dfs(l, c, i, j, -1);
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}