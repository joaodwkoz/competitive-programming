#include <iostream>

using namespace std;

int tab[10][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool ok = true;
    for (int i = 1; i <= n; i++) {
        int d, l, r, c;
        cin >> d >> l >> r >> c;
        r--; c--;

        if (!d) {
            for (int j = c; j <= c + l - 1; j++) {
                if (tab[r][j] || j > 9) {
                    ok = false;
                    break;
                }
                tab[r][j] = i;
            }
        } else {
            for (int j = r; j <= r + l - 1; j++) {
                if (tab[j][c] || j > 9) {
                    ok = false;
                    break;
                }
                tab[j][c] = i;
            }
        }

        if (!ok) { 
            break;
        }
    }

    cout << (ok ? "Y" : "N") << endl;

    return 0;
}