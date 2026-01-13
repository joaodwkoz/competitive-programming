#include <iostream>
#include <limits>
#include <string>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map<string, string> mp;
    for (int i = 1; i <= n; i++) {
        string nm;
        string comm;

        string x;
        getline(cin, x);

        nm = x.substr(0, x.size() - 12);
        comm = x.substr(x.size() - 11, x.size());

        mp[comm] = nm;
    }

    for (int i = 1; i <= m; i++) {
        string x;
        getline(cin, x);
        cout << (mp.find(x) != mp.end() ? mp[x] : "Nao existe musica") << endl;
    }

    return 0;
}