#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mx = -1, id = -1, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x > mx) {
            mx = x;
            id = i;
        }
    }

    cout << (id == 1 ? "S" : "N") << endl;

    return 0;
}