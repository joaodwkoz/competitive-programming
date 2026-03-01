#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, n;
    cin >> v >> n;

    int volts = v * n;

    for (int i = 10; i <= 90; i += 10) {
        ll x = 1LL * volts * i;
        cout << (x + 99LL) / 100LL << " ";
    }
    cout << endl;

    return 0;
}