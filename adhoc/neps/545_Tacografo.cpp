#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0, x, y;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        ans += x * y;
    }   

    cout << ans << endl;

    return 0;
}