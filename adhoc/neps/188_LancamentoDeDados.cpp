#include <iostream>

using namespace std;

int cnt[13];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mx = -1, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        cnt[x]++;
        mx = max(mx, cnt[x]);
    }

    for (int i = 1; i <= 12; i++) {
        if (cnt[i] == mx) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}