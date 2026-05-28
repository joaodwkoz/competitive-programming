#include <iostream>
#include <tuple>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    tuple<int, int, int> p1 = {a, b, c}, p2 = {d, e, f};

    cout << (p1 > p2 ? "A" : "B") << endl;

    return 0;
}