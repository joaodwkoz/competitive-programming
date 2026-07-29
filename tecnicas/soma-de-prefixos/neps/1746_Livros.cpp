#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
	cin >> n;

	map<int, int> diff;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		diff[x]++;
		diff[x + y]--;	
	}

	int ans = -1e9, curr = 0;
	for (auto v : diff) {
		curr += v.second;
		ans = max(curr, ans);
	}

	cout << ans << endl;

    return 0;
}