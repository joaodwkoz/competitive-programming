#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
    string s;
	cin >> n >> s;

	vector<int> pref(n);
    pref[0] = 0;
    
	for (int i = 1; i < n; i++) {
		if (s[i - 1] == 'A') {
			pref[i] = pref[i-1] + 1;
		} else {
			pref[i] = pref[i-1] - 1;
		}
	}

    int mn = *min_element(pref.begin(), pref.end());
    if (mn < 0) {
        int adj = -mn;
        for (int i = 0; i < n; i++) {
            pref[i] += adj;
        }
    }

	for (int v : pref) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}