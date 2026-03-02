#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int &x : arr) {
            cin >> x;
        }

        map<int, int> freq;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += 1LL * freq[arr[i] - i];
            freq[arr[i] - i]++;
        }

        cout << ans << endl;
    }

    return 0;
}