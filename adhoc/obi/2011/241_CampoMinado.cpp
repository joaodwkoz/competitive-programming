#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    for (int i = 0; i < n; i++) {
        int v = (int) (arr[i]) + (i + 1 < n && arr[i + 1]) + (i > 0 && arr[i - 1]);
        cout << v << endl;
    }

    return 0;
}