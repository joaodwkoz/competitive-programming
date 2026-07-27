#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> cps(n);
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 1; j <= m; j++) {
            int t;
            cin >> t;
            s += t;
        }
        cps[i] = {s, i};
    }

    sort(cps.begin(), cps.end());

    cout << cps[0].second + 1 << endl;

    return 0;
}