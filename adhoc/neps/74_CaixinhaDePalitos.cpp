#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    long long ans = 0;
    for (int i = 1; i <= m; i++) {
        ans += max(1LL * (min(m, n - i - 1) - max(1, n - i - m) + 1), 0LL);    
    }

    cout << ans << endl;

    return 0;
}