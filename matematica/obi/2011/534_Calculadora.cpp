#include <iostream>

using namespace std;

typedef long long ll;

int factors[4] = {2, 3, 5, 7};
int num_factors[4];
int den_factors[4];
int ans_factors[4];

int fexp(int b, int e) {
    int res = 1;

    while (e > 0) {
        if (e & 1) {
            res = res * b;
        }
        b = b * b;
        e >>= 1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        char y;
        cin >> x >> y;

        int j = 0;
        while (j < 4 && x > 0) {
            if (!(x % factors[j])) {
                if (y == '*') {
                    num_factors[j]++;
                } else {
                    den_factors[j]++;
                }

                x /= factors[j];
            } else {
                j++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        ans_factors[i] = num_factors[i] - den_factors[i];
    }

    int ans = 1;
    for (int i = 0; i < 4; i++) {
        if (ans_factors[i] > 0) {
            ans *= fexp(factors[i], ans_factors[i]);
        }
    }

    cout << ans << endl;

    return 0;
}