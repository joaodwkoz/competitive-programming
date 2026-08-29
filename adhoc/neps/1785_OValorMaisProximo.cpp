#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, l, r;
    cin >> x >> l >> r;

    if (x >= l && x <= r) {
        cout << x << endl;
    } else if (x >= r) {
        cout << r << endl;
    } else {
        cout << l << endl;
    }

    return 0;
}