#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c, d, e, f, g;
    cin >> n >> a >> b >> c >> d >> e >> f >> g;

    cout << (a + b + c - d - e - f + g == n ? "N" : "S") << endl;
 
    return 0;
}