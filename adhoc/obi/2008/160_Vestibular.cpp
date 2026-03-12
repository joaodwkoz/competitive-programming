#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string x, y;
    cin >> n >> x >> y;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += int(x[i] == y[i]);
    }

    cout << ans << endl;

    return 0;
}