#include <iostream>

using namespace std;

struct C {
    int p, sg;
    bool operator > (const C& other) const {
        if (other.p != p) {
            return p > other.p;
        }
        return sg > other.sg;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    C cor, fla;
    cor = {3 * a + b, c};
    fla = {3 * d + e, f};

    cout << (cor > fla ? "C" : fla > cor ? "F" : "=") << endl;

    return 0;
}