#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int q, lq, lr, lp;
        cin >> q >> lq >> lr >> lp;
        long long pgs = ((1LL * q * (1LL * lq + lr)) + lp - 1) / lp;
        cout << "O livro contera " << pgs << " " << (pgs > 1 ? "paginas" : "pagina") << "." << endl;
    }

    return 0;
}