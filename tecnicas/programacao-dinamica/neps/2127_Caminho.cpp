#include <iostream>
#include <vector>

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

    int mx = 0, curr = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] + arr[i + 1] < 1000) {
            curr += (int)(arr[i] + arr[i + 1] < 1000);
        } else {
            mx = max(mx, curr);
            curr = 0;
        }
    }
    curr += (int)(arr[n - 1] + arr[0] < 1000), mx = max(mx, curr);

    cout << mx << endl;

    return 0;
}