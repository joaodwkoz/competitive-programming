#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end(), greater<int>());

    int a = 0, b = n - 1;
    ll ans = 0;
    while (a <= b) {
        int mx_mem = max(0, min(b - a, k - 1));
        ans += 1LL * arr[a] * (mx_mem + 1);
        a++;
        b -= mx_mem;
    }

    cout << ans << endl;

    return 0;
}