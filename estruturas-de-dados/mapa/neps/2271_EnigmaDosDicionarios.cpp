#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string x;
    int n;
    cin >> x >> n >> ws;

    map<char, char> mp;

    string s;
    char a, b;
    for (int i = 1; i <= n; i++) {
        getline(cin, s);

        stringstream ss(s);
        ss >> a;
        ss.ignore(1, ':');
        ss >> b;

        mp[a] = b;
    }

    for (char y : x) {
        cout << mp[y];
    }
    cout << endl;

    return 0;
}