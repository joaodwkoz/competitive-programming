#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool allScored = true;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (!x) allScored = false;
        }
        if (allScored) ans++;
    }

    cout << ans << endl;

    return 0;
}