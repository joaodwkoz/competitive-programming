#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0, lst = -1, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if  (i >= 2) {
            ans += abs(lst - x);
        }
        lst = x;
    }

    cout << ans << endl;

    return 0;
}