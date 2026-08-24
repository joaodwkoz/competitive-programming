#include <iostream>

using namespace std;

int fcs[4] = {10, 5, 2, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int ans = 0;
    for (int i = 0; i < 4; i++) {
        ans += x / fcs[i];
        x %= fcs[i];
    }

    cout << ans << endl;

    return 0;
}