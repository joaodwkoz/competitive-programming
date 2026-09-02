#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(2);

    int x;
    cin >> x;

    int ans = ceil(x * 5 * 6.18);

    cout << "R$ " << (ans + (ans % 5 ? (5 - (ans % 5)) : 0)) / 100.0 << endl; 

    return 0;
}