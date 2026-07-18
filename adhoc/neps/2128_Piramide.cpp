#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << min({i, j, n - i + 1, n - j + 1}) << " ";
        }
        cout << endl;
    }

    return 0;
}