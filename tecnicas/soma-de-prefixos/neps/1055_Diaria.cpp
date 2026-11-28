#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<ll> ps;

    int k;
    ll p;
	for (int i = 0; i < n; i++) {
		cin >> k >> p;
		for (int j = 0; j < k; j++) {
			ps.push_back(p);
		}
	}

	int s = ps.size();

	vector<ll> pref(s);
	pref[0] = ps[0];

	for (int i = 1; i < s; i++) {
		pref[i] = pref[i-1] + ps[i];
	}

    int q;
	cin >> q;

	vector<pair<int, int>> qs(q);

	for (auto &x : qs) {
        cin >> x.first >> x.second;
    }

	for (auto qr : qs) {
		int l = qr.first, r = qr.second;

		l--; r--;

        if (l < 0 || r >= s) {
            return 0;
        } 

		ll ans = pref[r] - (l > 0 ? pref[l - 1] : 0);
         
		cout << ans << endl;
	}

    return 0;
}