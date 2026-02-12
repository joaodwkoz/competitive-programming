#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int getexp(int num) {
    int exp = 0;
    while (num > 0) {
        exp++;
        num >>= 1;
    }
    return exp;
}

ll fexp(ll b, int e, int m) {
    ll res = 1;
    
    while (e > 0) {
        if (e & 1) {
            res = (res * b) % m;
        }
        b = (b * b) % m;
        e >>= 1;
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = getexp(x) - getexp(y);
    }

    int bst = 0;
    int curr = 0;
    for (int i = 0; i < n; i++) {
        curr = max(arr[i], curr + arr[i]);
        bst = max(bst, curr);
    }

    cout << fexp(2, bst, 1e9 + 7) << endl;

    return 0;
}