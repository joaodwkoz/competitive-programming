#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    cout << (((min(x1, x2) <= n / 2 && max(x1, x2) > n / 2) || (min(y1, y2) <= n / 2 && max(y1, y2) > n / 2)) ? "S" : "N") << endl;

    return 0;
}