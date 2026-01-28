#include <iostream>

using namespace std;

const int MAXN = 1e2 + 10;

int pcs[MAXN];
int board[2020];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pcs[i] = x;
        board[x] = x;
    }

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        if (pcs[x] < 2019 && !board[pcs[x] + 1]) {
            board[pcs[x] + 1] = 1;
            board[pcs[x]] = 0;
            pcs[x]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << pcs[i] << endl;
    }

    return 0;
}