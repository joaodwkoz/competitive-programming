#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    int ans = 1e9 + 10;
    for (int i = 0; i < n - 1; i++) {
        ans = min(ans, arr[i + 1] - arr[i]);
    }

    cout << ans << endl;
 
    return 0;
}