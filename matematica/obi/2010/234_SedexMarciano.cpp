#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, a, p, r;
    cin >> l >> a >> p >> r;

    cout << ((l * l + a * a + p * p <= 4 * r * r) ? 'S' : 'N') << endl;

    return 0;
}