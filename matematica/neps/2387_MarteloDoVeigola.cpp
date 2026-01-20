#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, g;
    cin >> d >> g;

    int ans = min(d / 6, g);

    for (int x = d, y = g; x >= 1; x--, y += 4) {
        ans = max(ans, min(x / 6, y));
    }

    for (int x = d, y = g; y >= 4; x++, y -= 4) {
        ans = max(ans, min(x / 6, y));
    }

    cout << ans << endl;

    return 0;
}