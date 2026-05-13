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

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + arr[i - 1];
    }

    vector<int> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + arr[i];
    }

    for (int i = 1; i < n; i++) {
        if (pref[i] == suf[i]) {
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;
}