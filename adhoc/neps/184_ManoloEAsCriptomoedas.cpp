#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(2);

    int n;
    cin >> n;

    double c, v, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i == 1) {
            c = x * 100;
        } else if (i == n) {
            v = x * 100;
        }
    }

    cout << v - c << endl;

    return 0;
}