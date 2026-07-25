#include <iostream>
#include <vector>

using namespace std;

vector<int> rep;

int find(int x) {
    if (rep[x] == x) {
        return x;
    }
    return rep[x] = find(rep[x]);
}

void unite(int x, int y) {
    int repX = find(x);
    int repY = find(y);
    if (repX != repY) {
        rep[repY] = repX;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    rep.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        rep[i] = i;
    }

    for (int i = 1; i <= k; i++) {
        char op;
        int x, y;
        cin >> op >> x >> y;

        if (op == 'F') {
            unite(x, y);
        } else {
            cout << (find(x) == find(y) ? "S" : "N") << endl;
        }
    }

    return 0;
}