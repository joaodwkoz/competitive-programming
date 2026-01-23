#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;   
    getline(cin, x);

    string y;   
    getline(cin, y);

    set<string> pre_c;
    pre_c.insert(y);

    for (int i = 1; i < y.size(); i++) {
        string new_str = y.substr(i, y.size() - i) + y.substr(0, i);
        pre_c.insert(new_str);
    }

    for (int len = 1; len <= x.size(); len++) {
        for (int st = 0; st <= x.size() - len; st++) {
            if (pre_c.count(x.substr(st, len))) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    cout << "no" << endl;

    return 0;
}