#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, d;
    cin >> n >> a >> d;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ans += (abs(x - a) <= d);
    }

    cout << ans << endl;

    return 0;
}