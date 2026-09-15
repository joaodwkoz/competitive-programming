#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(10);

    int n;
    cin >> n;

    double s = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s += x * x * x;
    }

    cout << pow(s, (double) 1/3) << endl;

    return 0;
}