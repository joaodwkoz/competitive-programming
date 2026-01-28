#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> ems;
    for (int i = 1; i <= n; i++) {
        string x;
        cin >> x;
        string user = x.substr(0, x.find('@'));
        if (user.find('+') != string::npos) {
            user = user.substr(0, user.find('+'));
        }
        user.erase(remove(user.begin(), user.end(), '.'), user.end());
        string dom = x.substr(x.find('@') + 1);
        ems.insert(user + "@" + dom);
    }

    cout << ems.size() << endl;

    return 0;
}