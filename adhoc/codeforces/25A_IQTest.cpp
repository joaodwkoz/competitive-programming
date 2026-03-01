#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int lst_odd = -1, lst_even = -1, q_odd = 0, q_even = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x & 1) {
            lst_odd = i;
            q_odd++;
        } else {
            lst_even = i;
            q_even++;
        }
    }

    cout << (q_odd > q_even ? lst_even : lst_odd) << endl;

    return 0;
}