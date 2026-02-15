#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    ll s = 0;
    for (int i = 1; i <= x; i++) {
        s += 1LL * abs(i - (x - i + 1));
    }

    cout << s << endl;

    return 0;
}