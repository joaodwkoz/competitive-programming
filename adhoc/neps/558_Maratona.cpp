#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool ok = true;
    int lst = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x - lst > m) {
            ok = false;
        }
        lst = x;
    }

    cout << (ok && 42195 - lst <= m ? "S" : "N") << endl;

    return 0;
}