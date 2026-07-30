#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(1);

    char l;
    cin >> l;

    string s;
    int cnt = 0, ws = 0;
    while (cin >> s) {
        for (char x : s) {
            if (x == l) {
                cnt++;
                break;
            }
        }
        ws++;
    }

    double ans = ((double) cnt / ws) * 100.0;

    cout << ans << endl;

    return 0;
}