#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, n;
    cin >> c >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int ans = c;
    for (int i = 0; i < n - 1; i++) {
        if (ans >= arr[i] && arr[i + 1] > arr[i]) {
            ans = (ans / arr[i]) * arr[i + 1] + (ans % arr[i]);
        }
    }

    cout << ans << endl;
 
    return 0;
}