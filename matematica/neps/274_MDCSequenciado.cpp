#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	if (!b) {
        return a;
    }
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int &x : arr) {
        cin >> x;
    }

    int ans = arr[0];
    for (int i = 1; i < n; i++) {
		ans = gcd(ans, arr[i]);
	}

	cout << ans << endl;

    return 0;
}