#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (abs(a - b) + abs(b - c) + abs(c - a)) << endl;

    return 0;
}