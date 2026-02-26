#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mn = 1e9, mx = -1e9;

    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }

    cout << mn << " " << mx << endl;

    return 0;
}