#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<double> v(n);
    for (double &x : v) cin >> x;

    vector<double> g(n);
    for (double &x : g) cin >> x;

    double curr = 0, mx = -1e9, mn = 1e9;
    int mxd = -1, mnd = -1;

    for (int i = 0; i < n; i++) {
        curr += g[i] * m;

        if (curr * v[i] > mx) {
            mxd = i + 1;
            mx = curr * v[i];
        }
        
        if (curr * v[i] < mn) {
            mnd = i + 1;
            mn = curr * v[i];
        }
    }

    cout << fixed << setprecision(2) << mxd << " " << mx << endl << mnd << " " << mn << endl;

    return 0;
}