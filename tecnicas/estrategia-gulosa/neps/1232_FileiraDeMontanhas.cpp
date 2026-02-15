#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int curr = 1;
    int ans = 1;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] > d) {
            curr = 1;
        } else {
            curr++;
        }
        ans = max(ans, curr);
    }

    cout << ans << endl;

    return 0;
}