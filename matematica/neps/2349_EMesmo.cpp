#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        while(!(x & 1) && x > 0) {
            x >>= 1;
            cnt++;
        }
    }

    cout << (cnt >= k ? '1' : '0') << endl;

    return 0;
}