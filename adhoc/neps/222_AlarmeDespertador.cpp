#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    while (cin >> a >> b >> c >> d && (a || b || c || d )) {
        if (!a) {
            a = 24;
        }

        if (!c) {
            c = 24;
        }
        
        int h = c - a;
        if (h < 0) {
            h = 24 + h;
        }

        int m = d - b;
        if (m < 0) {
            m = 60 + m;
            h--;
        }

        int res = h * 60 + m;
        if (res < 0) {
            res = 1440 + res;
        }

        cout << res << endl;
    }

    return 0;
}