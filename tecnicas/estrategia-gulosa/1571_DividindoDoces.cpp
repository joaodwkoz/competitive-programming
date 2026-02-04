#include <iostream>

using namespace std;

const int MAXN = 1e5 + 17;

int exps[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mx = max(mx, x);
        exps[x]++;
    }

    int exp = 0;
    while (exps[exp] / 2 || exp <= mx) {
        exps[exp + 1] += exps[exp] / 2;
        exps[exp] %= 2;
        exp++;
    }

    int cnt = 0;
    for (int i = 0; i <= exp; i++) {
        if (exps[i] == 1) {
            cnt++;
        }
    }

    cout << (((cnt == 1 && n >= 2) || cnt == 2) ? "Y" : "N") << endl;

    return 0;
}