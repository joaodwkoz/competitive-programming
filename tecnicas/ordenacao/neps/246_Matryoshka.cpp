#include <iostream>
#include <vector>
#include <algorithm>

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
    
    vector<int> aux = arr;
    sort(aux.begin(), aux.end());

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] != aux[i]) {
            ans.push_back(arr[i]);
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;
    if (!ans.empty()) {
        for (int v : ans) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}