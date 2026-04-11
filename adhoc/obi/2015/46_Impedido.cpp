#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r, d;
    cin >> l >> r >> d;

    cout << (r > 50 && l < r && r > d ? "S" : "N") << endl;

    return 0;
}