#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, c;
    cin >> l >> c;

    cout << 1LL * (l - c + 1) * (l - c + 1) + 1LL * (c - 1) << endl;

    return 0;
}