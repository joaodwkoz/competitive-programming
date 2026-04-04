#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int s = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s += x;
        if (s >= 1e6) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}