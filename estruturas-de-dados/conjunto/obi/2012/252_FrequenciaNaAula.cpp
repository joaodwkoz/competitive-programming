#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<int> als;
    int ans = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;

        if (!als.contains(x)) {
            ans++;
        }

        als.insert(x);
    }

    cout << ans << endl;

    return 0;
}