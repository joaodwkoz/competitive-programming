#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    double val_a =  (double) a / y;
    double val_b = (double) b / x;

    cout << (val_a > val_b ? 1 : val_a == val_b ? 0 : 2) << endl;

    return 0;
}