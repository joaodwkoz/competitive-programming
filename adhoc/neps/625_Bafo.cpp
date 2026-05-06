#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, tc = 1;
    while (cin >> r && r) {
        int al = 0, be = 0;
        for (int i = 1; i <= r; i++) {
            int a, b;
            cin >> a >> b;
            al += a;
            be += b;
        }
        cout << "Teste " << tc++ << endl << (al > be ? "Aldo" : "Beto") << endl << endl;
    }

    return 0;
}