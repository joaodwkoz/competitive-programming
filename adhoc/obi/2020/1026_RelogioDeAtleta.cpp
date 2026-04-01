#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, f, c;
    cin >> r >> f >> c;

    cout << ((f > 3 * r || c < 95) ? "diminuir" : (f < 2 * r && c > 97) ? "aumentar" : "manter") << endl;

    return 0;
}