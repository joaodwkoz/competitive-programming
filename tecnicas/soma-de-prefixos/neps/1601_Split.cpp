#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> pref(n + 1, 0);
    int bst = -1e9, mxid = -1, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        pref[i] = pref[i - 1] + x;
        if (x > bst) {
            bst = x;
            mxid = i;
        }
    }

    cout << pref[mxid - 1] << endl << pref[n] - pref[mxid] << endl;

    return 0;
}