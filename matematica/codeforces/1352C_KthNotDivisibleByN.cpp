#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << ((r - 1) / (l - 1)) * l + ((r - 1) % (l - 1)) + 1 << endl;
    }

    return 0;
}