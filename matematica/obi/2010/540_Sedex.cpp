#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, l, p;
    cin >> n >> a >> l >> p;

    cout << (min(a, min(l, p)) >= n ? "S" : "N") << endl;

    return 0;
}