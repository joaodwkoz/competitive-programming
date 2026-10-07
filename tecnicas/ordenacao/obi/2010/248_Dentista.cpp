#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
    cin >> n;

    vector<pair<int, int>> hs(n);
    for (auto &x : hs) {
        cin >> x.first >> x.second;
    }

    sort(hs.begin(), hs.end(), comp);

    int ans = 0, lst = 0;
    for (int i = 0; i < n; i++) {
        if (hs[i].first >= lst) {
            ans++;
            lst = hs[i].second;
        }
    }

    cout << ans << endl;

    return 0;
}