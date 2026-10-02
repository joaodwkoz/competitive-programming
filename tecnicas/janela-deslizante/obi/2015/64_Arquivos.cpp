#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1e5 + 100;

int a[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b;
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
        
    sort(a, a + n);

    int ans = 0, l = 0, r = n - 1;
    while (l <= r) {
        if (a[l] + a[r] <= b) {
            l++;
        }
        r--;
        ans++;
    }

    cout << ans << endl;

    return 0;
}