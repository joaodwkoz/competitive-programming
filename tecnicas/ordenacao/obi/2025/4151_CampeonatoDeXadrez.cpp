#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    int pos = m * k;

    cout << (pos < n ? arr[pos - 1] + 1 : -1) << endl;

    return 0;
}