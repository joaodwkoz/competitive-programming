#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string x, y;
    cin >> n >> x >> y;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] == 'C' && y[i] == 'C') {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}