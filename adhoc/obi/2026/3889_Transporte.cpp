#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    int ans = 0, nxt = -1e9, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > nxt) {    
            nxt = x + t;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}