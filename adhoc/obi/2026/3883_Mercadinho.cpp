#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int t = 0, curr = 1, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x >= 60) {
            t += abs((i - t) - curr);
            curr++;
        }
    }

    cout << t << endl;

    return 0;
}