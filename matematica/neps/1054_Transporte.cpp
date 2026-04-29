#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int res = a * 30 / 100;

    cout << (res >= b ? res : 0) << endl;

    return 0;
}