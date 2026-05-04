#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r;
    cin >> n >> r;

    for (int i = 1; i <= r; i++) {
        int x, y;
        cin >> x >> y;
    }

    cout << (n * (n - 1) / 2) - r << endl;

    return 0;
}