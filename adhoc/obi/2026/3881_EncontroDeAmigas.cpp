#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;   
    int st = 1, en = 31;
    for (int i = 1; i <= 3; i++) {
        cin >> x >> y;
        st = max(st, x);
        en = min(en, y);
    }

    cout << max(0, en - st + 1) << endl;

    return 0;
}