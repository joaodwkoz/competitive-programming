#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    set<ll> divs;
    for (int i = 1; 1LL * i * i <= n; i++) {
        if (!(n % i)) {
            divs.insert(i);
            divs.insert(n / i);
        }
    }

    int ans = 0;
    for (ll div : divs) {
        if (div == 1) {
            continue;
        } 

        bool ok = true;
        int distinct = 0;
        for (int i = 2; 1LL * i * i <= div && ok; i++) {
            int cnt = 0;

            while (!(div % i)) {
                cnt++;
                div /= i;
            }

            if (cnt > 1) {
                ok = false;
            }
            
            if (cnt == 1) {
                distinct++;
            }
        }

        if (div > 1) {
            distinct++;
        }   

        if (ok && distinct >= 2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}