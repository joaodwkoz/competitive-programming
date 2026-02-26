#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool ok = true;
    bool going_up = true;
    int lst = -1, mx = -1e9, mx_id = -1;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (lst != -1) {
            if (going_up) {
                if (lst == x) {
                    ok = false;
                }

                if (x < lst) {
                    going_up = false;
                }
            } else {
                if (x >= lst) {
                    ok = false;
                }
            }
        }

        if (x > mx) {
            mx = x;
            mx_id = i;
        }

        lst = x;
    }

    if (going_up || mx_id == 1 || mx_id == n) {
        ok = false;
    }

    cout << (ok ? "SIM " + to_string(mx_id) : "NAO") << endl;

    return 0;
}