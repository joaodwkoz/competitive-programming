#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = ((__int128)(a % c) * (b % c)) % c;

    cout << ans << endl;

    return 0;
}