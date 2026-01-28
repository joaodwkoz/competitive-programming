#include <iostream>

using namespace std;

const int MAXN = 1e6 + 10;

char cams[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int j, a;
    cin >> j >> a;
    
    for (int i = 1; i <= j; i++) {
        cin >> cams[i];
    }

    int ans = 0;
    for (int i = 1; i <= a; i++) {
        char x;
        int y;
        cin >> x >> y;
        if (x >= cams[y] && cams[y] != 'U') {
            cams[y] = 'U';
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}