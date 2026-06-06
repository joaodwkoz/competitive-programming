#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> bs(n);
    for (int &x : bs) {
        cin >> x;
    }

    set<int> chs;
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        chs.insert(x);
    }

    int ans = 0;
    for (int b : bs) {
        ans += (int)(chs.count(b));
    }

    cout << ans << endl;

    return 0;
}