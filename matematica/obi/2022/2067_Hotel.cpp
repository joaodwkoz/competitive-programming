#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, a, n;
    cin >> d >> a >> n;

    int ans = (31 - n + 1) * (d + min((n - 1), 14) * a);

    cout << ans << endl;

    return 0;
}