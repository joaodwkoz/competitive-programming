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
    b = a;

    int m;
    cin >> m;

    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        b[x] = y;   
    }

    for (int v : a) {
        cout << v << " ";
    }
    cout << endl;

    for (int v : b) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}