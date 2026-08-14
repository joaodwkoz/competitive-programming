#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(1);

    int n;
    cin >> n;

    vector<pair<int, int>> hs(n);
    int lst = -1, x;
    for (int i = 0; i <= n; i++) {
        cin >> x;
        if (i >= 1) {
            hs[i - 1] = {x, lst};
        }
        lst = x;
    }
    
    vector<int> ws(n);
    for (int &x : ws) {
        cin >> x;
    }

    double ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (double)(hs[i].first + hs[i].second) * ws[i] / 2;
    }

    cout << ans << endl;

    return 0;
}