#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> u(n), d(n);
    for (int &x : u) {
        cin >> x;
    }
    for (int &x : d) {
        cin >> x;
    }

    vector<int> diff(n);
    int s, e;
    for (int i = 0; i < t; i++) {
        cin >> s >> e;
        s--; e--;

        diff[s] += 1;
        if (e + 1 < n) {
            diff[e + 1] -= 1;
        }
    }

    int flip = 0;
    for (int i = 0; i < n; i++) {
        flip += diff[i];

        if (!(flip % 2)) {
            cout << u[i] << " ";
        } else {
            cout << d[i] << " ";
        }
    } 

    return 0;
}