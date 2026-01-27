#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> tl(n * 2);
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        tl[2 * i] = { s, 1 };
        tl[2 * i + 1] = { e, -1 };
    }

    sort(tl.begin(), tl.end(), [](auto &a, auto &b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second;
    });

    int ans = 0, cur = 0;
    for (auto x : tl) {
        cur += x.second;
        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}