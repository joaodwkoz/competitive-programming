#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    int ans = arr[n - k - 1] - arr[0];
    for (int i = n - k; i < n; i++) {
        ans = min(ans, arr[i] - arr[i - n + k + 1]);
    }

    cout << ans << endl; 

    return 0;
}