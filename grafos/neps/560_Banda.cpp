#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));

    int x, y, z;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> z;
        adj[x][y] = z;
        adj[y][x] = z;
    }

    tuple<int, int, int> ans;
    int mx = -1e9;
    for (int i = 1; i <= n - 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            for (int k = j + 1; k <= n; k++) {
                int s = adj[i][j] + adj[j][k] + adj[k][i];
                if (s > mx) {
                    mx = s;
                    ans = {i, j, k};
                }
            }
        } 
    }

    cout << get<0>(ans) << " " << get<1>(ans) << " " << get<2>(ans) << endl;

    return 0;
}