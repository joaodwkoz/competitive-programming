#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> r(n);
	for (int &x : r) {
        cin >> x;
    }

	int curr = r[0], mx = r[0];
	for (int i = 1; i < n; i++) {
		curr = max(r[i], curr + r[i]);
		mx = max(mx, curr);
	}

	cout << mx << endl;

    return 0;
}