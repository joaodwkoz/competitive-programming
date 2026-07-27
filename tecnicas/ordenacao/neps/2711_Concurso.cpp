#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    cout << arr[n - k] << endl;
    
    return 0;
}