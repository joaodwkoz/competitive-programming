#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    cout << x[0] << x.size() - 2 << x[x.size() - 1] << endl;

    return 0;
}