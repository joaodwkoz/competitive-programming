#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    double mx = -1;
    int mxIdx = -1;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        double res = log(a) + (b - 1) * log(a);
        if (res > mx) {
            mx = res;
            mxIdx = i;
        }
    }

    cout << mxIdx << endl;

    return 0;
}