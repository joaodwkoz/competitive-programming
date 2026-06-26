#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int t1 = max({a, b, c, d}) + min({a, b, c, d});
    int t2 = a + b + c + d - t1;

    cout << abs(t1 - t2) << endl;

    return 0;
}