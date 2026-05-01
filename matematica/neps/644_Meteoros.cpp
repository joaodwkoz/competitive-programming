#include <iostream>

using namespace std;

int main(){	
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, tc = 1;
    while (cin >> a >> b >> c >> d && a && b && c && d) {
        int n;
        cin >> n;

        int x, y, ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x >> y;
            ans += (int)(x >= min(a, c) && x <= max(a, c) && y >= min(b, d) && y <= max(b, d));
        }

        cout << "Teste " << tc++ << endl << ans << endl << endl;
    }

    return 0;
}