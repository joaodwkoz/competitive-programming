#include <iostream>

using namespace std;

char chars[26];
char inv_chars[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y;
    cin >> x >> y;

    for (int i = 0; i < x.size(); i++) {
        if (chars[x[i] - 'a']) {
            if (chars[x[i] - 'a'] != y[i] || inv_chars[y[i] - 'a'] != x[i]) {
                cout << "Nao" << endl;
                return 0;
            }
        } else {
            chars[x[i] - 'a'] = y[i];
            inv_chars[y[i] - 'a'] = x[i];
        }
    }

    cout << "Sim" << endl;

    return 0;
}