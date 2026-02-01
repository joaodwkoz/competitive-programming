#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> xs(n), ys(n);
    for (int i = 0; i < n; i++) {
        cin >> xs[i] >> ys[i];
    }

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    cout << xs[n / 2] << " " << ys[n / 2] << endl;

    return 0;
}