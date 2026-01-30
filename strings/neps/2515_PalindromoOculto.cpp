#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    int ans = -1;
    for (int len = 1; len <= x.size(); len++) {
        for (int st = 0; st + len <= x.size(); st++) {
            string subst = x.substr(st, len);
            bool isPalindrome = true;
            for (int i = 0, j = subst.size() - 1; i <= j; i++, j--) {
                if (subst[i] != subst[j]) {
                    isPalindrome = false;
                    break;
                }
            }
            if (isPalindrome) {
                ans = max(ans, len);
            }
        }
    }

    cout << ans << endl;

    return 0;
}