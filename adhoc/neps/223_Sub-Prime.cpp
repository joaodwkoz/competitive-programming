#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, n;
    vector<int> rs, dv;
    while (cin >> b >> n && b && n) {
        rs.assign(b + 1, 0); 
        dv.assign(b + 1, 0);

        for (int i = 1; i <= b; i++) {
            cin >> rs[i];
        }

        int d, c, v;
        for (int i = 1; i <= n; i++) {
            cin >> d >> c >> v;
            dv[d] += v;
            dv[c] -= v;
        }

        bool isOk = true;
        for (int i = 1; i <= b && isOk; i++) {
            if (dv[i] > rs[i]) {
                isOk = false;
            }
        }

        cout << (isOk ? "S" : "N") << endl;
    }

    return 0;
}