#include <iostream>

const int SIZE = 20;

int mat[SIZE][SIZE];
int ponts[2];

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p;
    cin >> n >> m >> p;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 1; i <= p; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        int s = 0;
        for (int c = 0; c < m; c++) {
            s += mat[x][c];
            mat[x][c] = 0;
        }
        for (int l = 0; l < n; l++) {
            s += mat[l][y];
            mat[l][y] = 0;
        }
        ponts[i % 2] += s;
    }

    cout << (ponts[0] > ponts[1] ? "Lobo": (ponts[0] == ponts[1] ? "Empate" : "Enzo")) << endl;

    return 0;
}