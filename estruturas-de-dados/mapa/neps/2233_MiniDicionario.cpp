#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, string> dict;
    string s, t;
    for (int i = 1; i <= n; i++) {
        cin >> s >> t;
        dict[s] = t;
    }

    for (int i = 1; i <= n; i++) {
        string w;
        cin >> w;
        cout << dict[w] << " ";
    }
    cout << endl;

    return 0;
}