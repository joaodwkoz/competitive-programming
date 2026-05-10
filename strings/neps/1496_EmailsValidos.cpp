#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> ems;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        string x;
        cin >> x;

        bool isValid = x[0] != '.';
        char lst = 0;
        int strtip = 0;

        string em = "";
        string dom = "";

        for (char y : x) {
            if (y == '@') {
                if (lst == '.' || strtip > 0) {
                    isValid = false;
                }

                strtip++;
            }

            if (y == '.' && lst == '.' && isValid) {
                isValid = false;
            }

            if (lst == '@' && y == '.' && isValid) {
                isValid = false;
            }

            if (!strtip) {
                if (y == '-') {
                    isValid = false;
                }

                if (y != '.') {
                    em += tolower(y);
                }
            } else {
                if (y == '_') {
                    isValid = false;
                }

                if (y != '@') {
                    dom += tolower(y);
                }
            }

            lst = y;
        }

        if (lst == '.' || em.size() < 6 || em.size() > 30 || dom.size() < 3 || dom.size() > 30 || !strtip) {
            isValid = false;
        }

        string totalem = em + "@" + dom; 

        if (isValid && !ems.count(totalem)) {
            ems.insert(totalem);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}