#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, lst = -1;    
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x != lst) {
            ans++;
        }
        
        lst = x;
    }

    cout << ans << endl;

    return 0;
}