#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;

    int mn = min(n, c);
    int s = mn * (c + (c - mn + 1)) / 2;

    cout << s + max(0, n - c) << endl;

    return 0;
}