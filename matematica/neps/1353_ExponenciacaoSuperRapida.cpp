#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

ll strmod(string s, ll m) {
    ll res = 0;
    for (char x : s) {
        res = (res * 10 + (x - '0')) % m;
    }
    return res;
}

ll smallexp(ll b, ll exp, int m) {
    ll res = 1;
    while (exp) {
        if (exp & 1) res = res * b % m;
        b = b * b % m;
        exp >>= 1;
    }
    return res;
}

ll fexp(ll b, string exp, int m) {
    ll res = 1;
    for (char x : exp) {
        int v = x - '0';
        res = smallexp(res, 10, m);
        res = res * smallexp(b, v, m) % m;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string b, e;
    int m;
    cin >> b >> e >> m;

    if (e == "0") {
        cout << (1 % m) << endl;
        return 0;
    } else if (b == "0") {
        cout << 0 << endl;
        return 0;
    }

    cout << fexp(strmod(b, m), e, m) << endl;

    return 0;
}