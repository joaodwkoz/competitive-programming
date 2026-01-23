#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;   
    getline(cin, x);

    string y;   
    getline(cin, y);

    x = x.substr(0, x.size() - 1);

    int diff = x[0] - y[0];

    for (int i = 1; i < x.size(); i++) {
        if (x[i] - y[i] != diff) {
            cout << 'N' << endl;
            return 0;
        }
    }

    cout << 'S' << endl;

    return 0;
}