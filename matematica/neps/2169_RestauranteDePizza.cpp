#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (2 * c <= min(a, b) && !(360 % d) ? 'S' : 'N') << endl;

    return 0;
}