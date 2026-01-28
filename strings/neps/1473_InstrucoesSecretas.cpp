#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    string lst = "";
    while (cin >> x && x != "99999") {
        int s = (x[0] - '0') + (x[1] - '0');
        string inst = (s == 0 ? lst : s % 2 ? "left" : "right");
        cout << inst << " " << x.substr(2, 3) << endl;
        lst = inst;
    }

    return 0;
}