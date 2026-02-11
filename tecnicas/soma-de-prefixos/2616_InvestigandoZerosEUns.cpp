#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    vector<int> pref(n + 1, 0);
    vector<int> freq(2, 0);
    freq[0] = 1;

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + (arr[i - 1] == 1);
        ans += 1LL * freq[(pref[i] % 2) ^ 1];
        freq[pref[i] % 2]++;
    }

    cout << ans << endl;

    return 0;
}