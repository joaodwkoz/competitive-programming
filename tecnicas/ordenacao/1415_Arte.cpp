#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mnx, mny, mxx, mxy;
    cin >> n;

    mnx = mny = 1e9;
    mxx = mxy = -1e9;

    for (int i = 0; i < n; i++) {
        int x, y;
        char z;
        cin >> x >> z >> y;
        mnx = min(mnx, x);
        mxx = max(mxx, x);
        mny = min(mny, y);
        mxy = max(mxy, y);
    }

    cout << mnx - 1 << "," << mny - 1 << endl << mxx + 1 << "," << mxy + 1 << endl;

    return 0;
}