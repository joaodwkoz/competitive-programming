#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string x;
    cin >> n >> x;

    int ans = 1;
    for (int len = 1; len <= x.size(); len++) {
        for (int st = 0; st + len <= x.size(); st++) {
            string subst = x.substr(st, len);

            bool pal = true;
            for (int i = 0, j = len - 1; i < j; i++, j--) {
                if (subst[i] != subst[j]) {
                    pal = false;
                    break;
                }
            }

            if (pal) {
                ans = max(ans, len);
            }
        }
    }

    cout << ans << endl;

    return 0;
}