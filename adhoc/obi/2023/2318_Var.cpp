#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    cout << (x >= -8 && x <= 8 && y >= 0 && y <= 8 ? "S" : "N") << endl;

    return 0;
}