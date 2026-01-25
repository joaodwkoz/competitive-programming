#include <iostream>

using namespace std;

typedef long long ll;

bool isValid(ll compts, int c, int b) {
    int bcnt = 0;

    while (compts >= c) {
        ll aux = compts;
        bcnt += compts / c;
        compts = aux / c + aux % c;
    }

    if (compts >= 2) bcnt++;

    return bcnt >= b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, b;
    cin >> c >> b;

    ll l = 2, h = 1LL * c * b;

    ll ans = 2;
    while (l <= h) {
        ll m = l + (h - l) / 2;

        if (isValid(m, c, b)) {
            ans = m;
            h = m - 1;
