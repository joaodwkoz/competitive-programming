#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n >> ws;

    string s = "", t;
    for (int i = 1; i <= n; i++) {
        getline(cin, t);
        s += t;
    }

    stack<char> st;
    bool ok = true;
    for (char x : s) {
        if (x == '{') {
            st.push(x);
        } else if (x == '}') {
            if (st.empty()) {
                ok = false;
                break;
            }
            st.pop();
        }
    }

    cout << (st.empty() && ok ? "S" : "N") << endl;

    return 0;
}