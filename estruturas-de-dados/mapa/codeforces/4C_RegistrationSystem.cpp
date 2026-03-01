#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<string, int> mp;
    while (t--) {
        string x;
        cin >> x;
        cout << (mp.count(x) ? x + to_string(mp[x]) : "OK") << endl;
        mp[x]++;
    }

    return 0;
}