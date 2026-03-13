#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 7 + max(min(n - 10, 20), 0) + max(min(n - 30, 70), 0) * 2 + max(n - 100, 0) * 5;

    cout << ans << endl;

    return 0;
}