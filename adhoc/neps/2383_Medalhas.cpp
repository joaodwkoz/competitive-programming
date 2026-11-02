#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int>& arr, int max) {
    int n = arr.size(), ans = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            ans++;
        }        
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, v;
    cin >> a >> v;

    vector<int> b(a), r(v);

    int mxb = -1e9, mxr = 1e9;
    for (int &x : b) {
        cin >> x;
        mxb = max(mxb, x);
    }

    for (int &x : r) {
        cin >> x;
        mxr = max(mxr, x);
    }

    sort(b.begin(), b.end(), greater<int>());
    sort(r.begin(), r.end(), greater<int>());

    int ans = (mxr > mxb ? solve(r, mxb) : solve(b, mxr));

    cout << ans << endl;

    return 0;
}