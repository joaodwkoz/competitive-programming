#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    bool ok = false;
    if ((c > a && c > b && a + b > c) || 
        (b > a && b > c && a + c > b) ||
        (a > b && a > c && b + c > a)) {
        ok = true;
    }

    cout << (ok ? "S" : "N") << endl;


    return 0;
}