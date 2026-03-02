#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    cout << (x / a) * (y / b) * (z / c) << endl;

    return 0;
}