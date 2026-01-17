#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m;
    cin >> t >> n >> m;

    while(t--) {
        int mx = -1e9;
        int mn = 1e9;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                char x;
                cin >> x;

                if (x == '#') {
                    mx = max(mx, n - i + 1);
                    mn = min(mn, n - i + 1);
                }
            }
        }

        cout << mx - mn << endl;
    }

    return 0;
}