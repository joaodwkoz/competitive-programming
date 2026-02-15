#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    
    int ans = -1, esf = 1e9 + 10;
    for (int i = 1; i <= n; i++) {
        cin >> m;

        int ex = 0, ex_inv = 0, lst = -1, x;
        for (int j = 1; j <= m; j++) {
            cin >> x;

            if (j >= 2) {
                ex += max(0, x - lst);
                ex_inv += max(0, lst - x);
            }

            lst = x;
        }
        
        if (min(ex, ex_inv) < esf) {
            ans = i;
            esf = min(ex, ex_inv);
        }
    }

    cout << ans << endl;

    return 0;
}