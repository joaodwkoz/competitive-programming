#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    cout << ((c < e || d < f || g < a || h < b) ? 0 : 1) << endl;

    return 0;
}