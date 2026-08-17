#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, o;
    cin >> p >> o;

    cout << min(p / 2, o / 4) << endl;

    return 0;
}