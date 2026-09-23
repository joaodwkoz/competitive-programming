#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    char x; 
    int xi, yi, xf, yf;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x == 'R') {
            cin >> xi >> yi >> xf >> yf;
        } else {
            cout << abs(xf - xi) * abs(yf - yi) << endl;
        }
    }

    return 0;
}