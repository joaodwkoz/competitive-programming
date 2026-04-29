#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, x;
    getline(cin, s);
    cin >> x;

    set<char> st;
    for (char y : x) {
        st.insert(y);
    }

    bool ok = false;
    int ans = 0;
    for (char a : s) {
        if (a == ' ') {
            if (ok) {
                ans++;
            }
            ok =  false;
        } else if (st.count(a)) {
            ok = true;
        }
    }

    if (ok) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}