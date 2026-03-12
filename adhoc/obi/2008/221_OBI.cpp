#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        ans += int(x + y >= p);
    }

    cout << ans << endl;

    return 0;
}