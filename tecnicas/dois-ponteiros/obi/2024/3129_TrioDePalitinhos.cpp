#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }
    sort(arr.begin(), arr.end());

    ll ans = 0;
    for (int k = 2; k < n; k++) {
        int j = k - 1, i = 0;

        while (i < j) {
            if (arr[i] + arr[j] > arr[k]) {
                ans += 1LL * (j - i);
                j--;
            } else {
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}