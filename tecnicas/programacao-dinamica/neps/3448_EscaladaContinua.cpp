#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int curr = 0, ans = 1, lst = -1, x;
    while(cin >> x) {
        curr = x > lst ? curr + 1 : 1;
        lst = x;
        ans = max(ans, curr);
    }

    cout << ans << endl;

    return 0;
}