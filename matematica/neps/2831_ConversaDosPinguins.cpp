#include <iostream> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char e1, e2;
    int v1, v2;
    cin >> e1 >> e2 >> v1 >> v2;

    auto cvrt = [&](char e, int v) {
        int res = v;
        if (e == 'F') {
            res = 5 * (v - 32) / 9;
        }
        return res;
    };

    v1 = cvrt(e1, v1);
    v2 = cvrt(e2, v2);

    cout << (v1 > v2 ? 'B' : 'A') << endl;

    return 0;
}