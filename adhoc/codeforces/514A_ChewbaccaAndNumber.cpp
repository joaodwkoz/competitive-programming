#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string num, ans = "";
    cin >> num;

    for (char x : num) {
        int v = x - '0';
        
        if ((ans.empty() && v == 9) || v < 5) {
            ans += v + '0';
        } else {
            ans += 9 - v + '0';
        }
    }

    cout << ans << endl;

    return 0;
}