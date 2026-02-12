#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    ll ans = s;
    for (int i = 1; i < n; i++) {
        ans += min(s, arr[i] - arr[i - 1]);
    }    

    cout << ans << endl;

    return 0;
}