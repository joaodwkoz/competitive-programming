#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i, n, d, e, f;
    cin >> i >> n;
    d = e = f = i;

    for (int i = 1; i <= n; i++) {
        char x, y;
        cin >> x >> y;

        if (x == 'C') {
            int v;
            cin >> v;
            if (y == 'D') d -= v;
            else if (y == 'E') e -= v;
            else f -= v;
        } else if (x == 'V') {
            int v;
            cin >> v;
            if (y == 'D') d += v;
            else if (y == 'E') e += v;
            else f += v;
        } else {
            char z;
            int v;
            cin >> z >> v;
            if (y == 'D') {
                d += v;
                if (z == 'E') e -= v;
                else f -= v;
            } else if (y == 'E') {
                e += v;
                if (z == 'D') d -= v;
                else f -= v;
            } else {
                f += v;
                if (z == 'D') d -= v;
                else e -= v;
            }
        }
    }

    cout << d << " " << e << " " << f << endl;

    return 0;
}