#include <iostream>

using namespace std;

const int INF = (int) 1e9;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e, d;
    cin >> n >> e >> d;

    int ans = INF;

    for (int i = 1; i <= n; i++) {
        int e_i, d_i;
        cin >> e_i >> d_i;
        ans = min(ans, abs(e_i - e) + abs(d_i - d));
    }

    cout << ans << endl;
         
    return 0;
}