#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int vit = (a == 'W') + (b == 'W') + (c == 'W') + (d == 'W') + (e == 'W') + (f == 'W');

    cout << (vit >= 5 ? 1 : vit >= 3 ? 2 : vit >= 1 ? 3 : -1) << endl;

    return 0;
}