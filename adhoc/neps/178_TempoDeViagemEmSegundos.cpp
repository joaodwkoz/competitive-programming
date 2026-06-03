#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d1, h1, m1, d2, h2, m2;
    cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2;

    if (!h1) {
        h1 = 24;
    }

    if (!h2) {
        h2 = 24;
    }

    int d = d2 - d1;

    int h = h2 - h1;
    if (h < 0) {
        h += 24;
        d--;
    }

    int m = m2 - m1;
    if (m < 0) {
        m += 60;
        h--;
    }

    int res = d * 86400 + h * 3600 + m * 60;

    cout << res << endl;

    return 0;
}