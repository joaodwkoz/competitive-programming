#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (c / a > d / b ? "A" : "G") << endl;

    return 0;
}