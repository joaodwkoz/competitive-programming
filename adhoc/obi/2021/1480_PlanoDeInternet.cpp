#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    int ans = x;
    for (int i = 1; i <= n; i++) {
        int y;
        cin >> y;
        ans += x - y;
    }

    cout << ans << endl;

    return 0;
}