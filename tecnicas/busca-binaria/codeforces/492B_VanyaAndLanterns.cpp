#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

vector<double> arr;

bool isOk(double len, double l) {
    if (arr[0] - len > 0) {
        return false;
    }

    double lst_en = arr[0] + len;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - len > lst_en) {
            return false;
        }
        lst_en = arr[i] + len;
    }

    return arr[arr.size() - 1] + len >= l;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(9);

    int n, l;
    cin >> n >> l;

    arr.resize(n);
    for (double &x : arr) cin >> x;

    sort(arr.begin(), arr.end());

    double lo = 0, h = l, ans = -1;
    for (int i = 1; i <= 100; i++) {
        double m = lo + (h - lo) / 2;

        if (isOk(m, l)) {
            ans = m;
            h = m;
        } else {
            lo = m;
        }
    }

    cout << ans << endl;

    return 0;
}