#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;
    
    int ans = 0;
    int lst = 0;
    for (char x : n) {
        int v = x - '0';
        int fr_dist = v >= lst ? v - lst : 9 - lst + v + 1;
        int bc_dist = v <= lst ? lst - v : lst + 9 - v + 1;
        int movs = min(fr_dist, bc_dist);
        ans += movs;
        lst = v;
    }

    cout << ans << endl;

    return 0;
}