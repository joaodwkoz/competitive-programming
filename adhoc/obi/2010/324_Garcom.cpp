#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int l, c;
        cin >> l >> c;

        if (l > c) {
            ans += c;
        }
    }

    cout << ans << endl;
    
    return 0;
}