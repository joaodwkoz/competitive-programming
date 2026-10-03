#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    for (ll i = 2 ; i * i <= n; i++) {
        if (!(n % i) && i * i != n && n / i >= 2) {
            cout << "S" << endl;
            return 0;
        }
    }   

    cout << "N" << endl;

    return 0;
}