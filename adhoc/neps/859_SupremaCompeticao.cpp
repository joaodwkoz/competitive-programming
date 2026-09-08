#include <iostream>

using namespace std;

int who(int x, int y) {
    if (y == (x + 1) % 5 || y == (x + 2) % 5) {
        return 1;
    }
    return 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int w = 0, e = 0;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        int res = who(x, y);
        w += (int)(res == 1);
        e += (int)(res == 2);
    }

    cout << (w > e ? "will" : "11") << endl;

    return 0;
}