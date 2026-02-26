#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int bad = b - a;
    int bcd = c - b;

    cout << (bad < bcd ? 1 : bad == bcd ? 0 : -1) << endl;

    return 0;
}