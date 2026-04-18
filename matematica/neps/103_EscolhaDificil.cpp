#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    cout << max(d - a, 0) + max(e - b, 0) + max(f - c, 0) << endl;

    return 0;
}