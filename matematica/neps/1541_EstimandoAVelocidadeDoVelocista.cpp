#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(5);

    int n;
    cin >> n;

    vector<pair<int, int>> mds(n);
    for (int i = 0; i < n; i++) {
        cin >> mds[i].first >> mds[i].second;
    }

    sort(mds.begin(), mds.end());

    double mx = -1e9;
    for (int i = 1; i < n; i++) {
        mx = max(mx, (double) abs(mds[i].second - mds[i - 1].second) / (mds[i].first - mds[i - 1].first));
    }

    cout << mx << endl;

    return 0;
}