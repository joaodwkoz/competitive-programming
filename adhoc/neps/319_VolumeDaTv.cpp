#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, n;
    cin >> v >> n;

    int ans = v, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ans = max(min(ans + x, 100), 0);
    }

    cout << ans << endl;
    
    return 0;
}