#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, p;
    cin >> n >> r >> p;

    int sm = n;
    int aux = n;
    int c = 0;

    while (sm < p) {
        aux *= r;
        sm += aux;
        c++;
    }

    cout << c << endl;

    return 0;
}