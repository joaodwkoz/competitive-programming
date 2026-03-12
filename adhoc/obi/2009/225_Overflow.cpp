#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, q;
    char op;
    cin >> n >> p >> op >> q;

    int ans = (op == '+' ? p + q : p * q);

    cout << (ans <= n ? "OK" : "OVERFLOW") << endl;

    return 0;
}