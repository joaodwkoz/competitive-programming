#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;   
    getline(cin, x);

    if (x.size() == 8) {
        if ((isupper(x[0]) && isupper(x[1]) && isupper(x[2])) && (x[3] == '-') && (isdigit(x[4]) && isdigit(x[5]) && isdigit(x[6]) && isdigit(x[7]))) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;    
        }
    } else if (x.size() == 7) {
        if ((isupper(x[0]) && isupper(x[1]) && isupper(x[2])) && (isdigit(x[3])) && (isupper(x[4])) && (isdigit(x[5]) && isdigit(x[6]))) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << 0 << endl;
    }

    return 0;
}