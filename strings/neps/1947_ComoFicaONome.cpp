#include <iostream>
#include <string>
#include <limits>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 1; i <= n; i++) {
        string x;
        getline(cin, x);

        if (!x.empty() && x.back() == '\r') x.pop_back();

        string nm = "";
        long long num = 0;
        bool numCleared = false;

        for (char y : x) {
            if (numCleared) {
                nm += y;
            } else if (isdigit(y)) {
                num *= 10;
                num += y - '0';
            }

            if (y == ' ' && !numCleared) {
                numCleared = true;
            }
        }

        num %= nm.size();

        cout << nm.substr(num, nm.size() - num) << nm.substr(0, num) << endl;
    }

    return 0;
}