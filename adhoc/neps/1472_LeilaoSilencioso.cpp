#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string nm = "", x;
    int mx = -1, y;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        if (y > mx) {
            nm = x;
            mx = y;
        }
    }

    cout << nm << endl;

    return 0;
}