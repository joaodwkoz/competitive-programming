#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    char k;
    int x = 0, y = 0, curr = 90, n;
    for (int i = 1; i <= t; i++) {
        cin >> k >> n;
        if (k == 'G') {
            curr = (curr + n) % 360;
        } else {
            if (curr == 90) {
                y += n;
            } else if (curr == 180) {
                x += n;
            } else if (curr == 270) {
                y -= n;
            } else {
                x -= n;
            }
        }
    }

    cout << x << " " << y << endl;

    return 0;
}