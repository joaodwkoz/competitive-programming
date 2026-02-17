#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int tc = 1;
    while (cin >> n && n) {
        int ans = -1;

    	for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x == i) ans = i;
        }

        if (tc > 1) cout << endl;

        cout << "Teste " << tc++ << endl;
        cout << ans << endl;
    }

    return 0;
}