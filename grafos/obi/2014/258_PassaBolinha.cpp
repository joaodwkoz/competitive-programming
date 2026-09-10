#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<vector<int>> grid;
vector<vector<int>> flag;
int n, ans;

void dfs(pair<int, int> st) {
    auto [x, y] = st;

    if (x < 0 || y < 0 || st.first == n || y == n || flag[x][y]) {
        return;
    }

    flag[x][y] = 1;
    ans++;

    if (x + 1 < n && !flag[x + 1][y] && grid[x + 1][y] >= grid[x][y]) {
        dfs({x + 1, y});
    }

    if (y + 1 < n && !flag[x][y + 1] && grid[x][y + 1] >= grid[x][y]) {
        dfs({x, y + 1});
    }

    if (x > 0 && !flag[x - 1][y] && grid[x - 1][y] >= grid[x][y]) {
        dfs({x - 1, y});
    }

    if (y > 0 && !flag[x][y - 1] && grid[x][y - 1] >= grid[x][y]) {
        dfs({x, y - 1});
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> st;
    cin >> n >> st.first >> st.second;

    grid.assign(n, vector<int>(n));
    flag.assign(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
            
    }

    st.first--;
    st.second--;
    
    dfs(st);

    cout << ans << endl;

    return 0;
}