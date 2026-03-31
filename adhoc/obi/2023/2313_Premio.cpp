#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, d, b;
    cin >> p >> d >> b;

    int res = p + 2 * d + 3 * b;

    cout << (res >= 150 ? "B" : res >= 120 ? "D" : res >= 100 ? "P" : "N") << endl;

    return 0;
}