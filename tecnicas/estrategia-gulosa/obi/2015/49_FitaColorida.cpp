#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = !x ? 0 : INF;
    }

    for (int i = 1; i < n; i++) {
        arr[i] = min({arr[i], arr[i - 1] + 1, 9});
    }

    for (int i = n - 2; i >= 0; i--) {
        arr[i] = min({arr[i], arr[i + 1] + 1, 9});
    }

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}