#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> arr(n);
	for (int &x : arr) {
        cin >> x;
    }

	int curr = accumulate(arr.begin(), arr.begin() + 4, 0), ans = curr;
	for (int i = 4; i < n; i++) {
        curr += arr[i] - arr[i - 4];
        ans = max(ans, curr);
    }

    cout << ans << endl;

    return 0;
}