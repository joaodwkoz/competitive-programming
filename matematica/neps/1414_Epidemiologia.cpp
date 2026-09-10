#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, n, r;
    cin >> p >> n >> r;

    int ans = 0, s = n, curr = n;
    while (s <= p) {
        curr = curr * r;
        s += curr;
        ans++;
    }

    cout << ans << endl;

    return 0;
}