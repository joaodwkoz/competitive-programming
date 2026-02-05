#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;

    vector<int> arr1(n, 0), arr2(n, 0);
    for (int &x : arr1) cin >> x;
    for (int &x : arr2) cin >> x;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int curr = 0;
    int ans = 0;
    if (t == 1) {
        for (int i = 0; i < n; i++) ans += max(arr1[i], arr2[i]);
    } else {
        for (int i = 0; i < n; i++) {
            curr += max(arr1[i], arr2[n - i - 1]);
        }
        ans = curr;
        curr = 0;
        for (int i = 0; i < n; i++) {
            curr += max(arr1[n - i - 1], arr2[i]);
        }
        ans = max(ans, curr);
    }

    cout << ans << endl;

    return 0;
}