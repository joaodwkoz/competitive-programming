#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    map<char, int> chars;

    for (char x : a) {
        chars[x]++;
    }

    for (char x : b) {
        if (x == '*') {
            continue;
        }

        if (!chars[x]) {
            cout << "N" << endl;
            return 0;
        }

        chars[x]--;
    }

    cout << "S" << endl;

    return 0;
}