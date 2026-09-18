#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 1e5 + 10;

int l[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    sort(l, l + n);

    int s = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        if (i >= 2) {
            if (s > l[i]) {
                mx = i + 1;
            }
        }

        s += l[i];
    }

    cout << mx << endl;

    return 0;
}