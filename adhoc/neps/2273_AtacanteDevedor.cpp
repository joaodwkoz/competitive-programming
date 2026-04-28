#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &x : a) {
        cin >> x;
    }
    for (int &x : b) {
        cin >> x;
    }

    int rec = 0, pag = 0;
    for (int i = 0; i < n; i++) {
        int y = abs(a[i] - b[i]);
        
        if (a[i] >= b[i]) {
            rec += y;
        } else {
            pag += y;
        }
    }

    cout << rec << " "  << pag << endl;

    return 0;
}