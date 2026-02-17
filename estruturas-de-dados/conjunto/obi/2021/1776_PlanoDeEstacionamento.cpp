#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<int> vgs;

    for (int i = 1; i <= n; i++) vgs.insert(i);

    int ans = 0;
    bool cont = true;
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;

        if (!cont) continue;

        auto it = vgs.upper_bound(x);
        if (it == vgs.begin()) {
            cont = false;
            continue;
        }

        it--;
        vgs.erase(it);

        ans++;
    }

    cout << ans << endl;

    return 0;
}