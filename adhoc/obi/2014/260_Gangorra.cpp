#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mul_a = a * b, mul_b = c * d;

    cout << (mul_a < mul_b ? 1 : mul_a == mul_b ? 0 : -1) << endl;

    return 0;
}