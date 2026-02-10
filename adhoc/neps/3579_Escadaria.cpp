#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e9 + 10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == -1) { 
            arr[i] = INF;
        }
    }

    for (int i = 1; i < n; i++) {
        arr[i] = min(arr[i], arr[i - 1] + 1);
    }

    for (int i = n - 2; i >= 0; i--) {
        arr[i] = min(arr[i], arr[i + 1] + 1);
    }

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}