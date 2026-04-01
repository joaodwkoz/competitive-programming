#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x, pe = 0, me = 0;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        pe += (int)(x == 1);
        me += (int)(x == 2);
    }

    int p, m;
    cin >> p >> m;

    cout << (p >= pe && m >= me ? "S" : "N") << endl;

    return 0;
}