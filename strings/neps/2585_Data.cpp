#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map<string, string> ms = {
        {"January",   "01"},
        {"February",  "02"},
        {"March",     "03"},
        {"April",     "04"},
        {"May",       "05"},
        {"June",      "06"},
        {"July",      "07"},
        {"August",    "08"},
        {"September", "09"},
        {"October",   "10"},
        {"November",  "11"},
        {"December",  "12"}
    };

    for (int i = 1; i <= n; i++) {
        string x;
        getline(cin, x);

        if (!x.empty() && x.back() == '\r') x.pop_back();

        int stag = 1;
        string m = "";
        int d = 0;
        int yr = 0;

        for (char y : x) {
            if (y == ',') continue;

            if (y == ' ') {
                stag++;
            } else {
                if (stag == 1) {
                    m += y;
                } else if (stag == 2) {
                    d *= 10;
                    d += y - '0';
                } else if (stag == 3) {
                    yr *= 10;
                    yr += y - '0';
                }
            }            
        }

        if (!ms.count(m) || d < 1 || d > 31) {
            cout << "Invalid" << endl;
        } else {
            cout << ms[m] << "/" << (d > 9 ? to_string(d) : "0" + to_string(d)) << "/" << (yr % 100 > 9 ? to_string(yr % 100) : "0" + to_string(yr % 100)) << endl; 
        }
    }

    return 0;
}