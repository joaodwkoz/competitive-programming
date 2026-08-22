#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, x;
    for (int i = 1; i <= 5; i++) {
        cin >> x;
        ans += x * (1 << (5 - i));
    }

    cout << ans << endl;

    return 0;
}