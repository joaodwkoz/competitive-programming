#include <iostream>
#include <cmath>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int a, b, c;

        cin >> a;

        if (!a) {
            break;
        }

        cin >> b >> c;

        cout << (int) sqrt(a * b * 100 / c) << endl;
    }

    return 0;
}