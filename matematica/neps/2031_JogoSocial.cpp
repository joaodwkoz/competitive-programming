#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    
    int ans = 0;
    while (ans * a + (ans / 7) * b < c) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}