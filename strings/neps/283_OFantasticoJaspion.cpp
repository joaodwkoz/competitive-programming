#include <iostream>
#include <map>
#include <string>
#include <limits>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m;
    cin >> t;

    map<string, string> mp;
    for (int i = 1; i <= t; i++) {
        cin >> n >> m;

        string x, y;
        for (int j = 1; j <= n; j++) {
            cin >> x;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin >> ws, y);

            if (!y.empty() && y.back() == '\r') {
                y.pop_back();
            }

            mp[x] = y;
        }

        string s = "", mu = "";
        for (int j = 1; j <= m; j++) {
            getline(cin, s);

            if (!s.empty() && s.back() == '\r') {
                s.pop_back();
            }

            string curr = "", w = "";
            for (char c : s) {
                if (c == ' ') {
                    w += (w.empty() ? "" : " ") + (mp.count(curr) ? mp[curr] : curr);
                    curr = "";
                } else {
                    curr += c;
                }
            }

            if (!curr.empty()) {
                w += (w.empty() ? "" : " ") + (mp.count(curr) ? mp[curr] : curr);
            }

            cout << w << endl;
        }

        cout << endl;

        mp.clear();
    }

    return 0;
}