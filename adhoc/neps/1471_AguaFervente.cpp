#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int b;
    cin >> b;

    int res = 5 * b - 400;

    cout << res << endl << (res > 100 ? -1 : res == 100 ? 0 : 1) << endl;

    return 0;
}