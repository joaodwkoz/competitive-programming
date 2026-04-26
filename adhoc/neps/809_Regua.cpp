#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (abs(c - b) >= a ? "EH SUFICIENTE" : "NAO EH SUFICIENTE") << endl;

    return 0;
}