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
    int mx = 0;
    for (int &x : arr) {
        cin >> x;
        mx = max(mx, x);
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 1; i <= mx; i++) {
        auto it = lower_bound(arr.begin(), arr.end(), i);

        int idx = it - arr.begin();

        if (n - idx >= i) {
            ans = i;
        } 
    }

    cout << ans << endl;

    return 0;
}