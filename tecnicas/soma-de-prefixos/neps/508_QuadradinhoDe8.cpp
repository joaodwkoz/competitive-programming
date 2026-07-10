#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    map<ll, ll> freq;
    freq[0] = 1;

    ll ans = 0, pref = 0;
    for (int i = 0; i < n; i++) {
        pref += arr[i];
        ans += freq[pref % 8];
        freq[pref % 8]++;
    }

    cout << ans << endl;

    return 0;
}