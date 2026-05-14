#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }
    sort(arr.begin(), arr.end(), greater<>());

    int lst = -1;
    for (int i = 0; i < n; i++) {
        if (i >= k && arr[i] != lst) {
            cout << i << endl;
            return 0;
        }
        lst = arr[i];
    }

    cout << n << endl;

    return 0;
}