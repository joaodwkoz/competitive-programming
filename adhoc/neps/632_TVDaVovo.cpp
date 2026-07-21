#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, tc = 1;
    while (cin >> m >> n && (m || n)) {
        vector<vector<int>> grid(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }       

        int x = 0, y = 0, xPos, yPos;
        while (cin >> xPos >> yPos && (xPos || yPos)) {
            x += xPos;
            y += yPos;
        }

        x = ((x % n) + n) % n;
        y = ((y % m) + m) % m;

        vector<vector<int>> newg(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                newg[(i - y + m) % m][(j + x) % n] = grid[i][j];
            }
        }            

        cout << "Teste " << tc++ << endl;
        for (auto row : newg) {
            for (auto val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}