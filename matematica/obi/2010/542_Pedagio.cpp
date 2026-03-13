#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, d, k, p;
    cin >> l >> d >> k >> p;

    int ans = k * l + (l / d) * p;

    cout << ans << endl;

    return 0;
}