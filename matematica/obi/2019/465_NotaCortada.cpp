#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, t;
    cin >> b >> t;

    int f = (b + t) * 35;
    int m = 70 * 160 - f;

    cout << (f > m ? 1 : f == m ? 0 : 2) << endl;

    return 0;
}