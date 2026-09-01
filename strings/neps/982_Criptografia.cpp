#include <cctype>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int _;
    string x;
    cin >> _ >> x;

    string ans = "";
    for (char y : x) {
        if (isdigit(y)) {
            ans += ((y - '0') % 2 ? y : '*');
        } else {
            ans += (y == 'a' | y == 'e' | y == 'i' | y == 'o' | y == 'u' ? '*' : y);
        }
    }

    cout << ans << endl;

    return 0;
}