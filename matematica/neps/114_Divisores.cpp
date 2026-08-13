#include <iostream>

using namespace std;

bool isValid(int x, int a, int b, int c, int d) {
    return (!(x % a) && (x % b) && !(c % x) && (d % x));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = -1;
    for (int i = 2; i * i <= c; i++) {
        if (!(c % i)) {
            if (isValid(i, a, b, c, d)) {
                ans = ans == -1 ? i : min(ans, i);
            } else if (isValid(c / i, a, b, c, d)) {
                ans = ans == -1 ? c / i : min(ans, c / i);
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}