#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int lst = -1, curr = 1, ans = 1;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x != lst) {
            curr = 1;
        } else {
            curr += 1;
        }

        ans = max(ans, curr);
        lst = x;
    }

    cout << ans << endl;

    return 0;
}