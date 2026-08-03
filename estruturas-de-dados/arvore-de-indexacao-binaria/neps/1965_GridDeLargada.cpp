#include <iostream>
#include <vector>

using namespace std;

void update(vector<int> &bit, int i) {
    int n = bit.size() - 1;
    for (; i <= n; i += i & -i) {
        bit[i] += 1;
    }
}

int query(vector<int> &bit, int i) {
    int s = 0;
    for (; i > 0; i -= i & -i) {
        s += bit[i];
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        vector<int> aux(n + 1); 
        int x;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            aux[x] = i;
        }

        vector<int> bit(n + 1);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            int y = aux[x];
            ans += (i - 1) - query(bit, y);
            update(bit, y);
        }
        
        cout << ans << endl;
    }

    return 0;
}