#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, m;
    cin >> k >> n >> m;

    vector<int> nxt(n + 1, 1), ccls(n + 1, 0);
    map<int, vector<int>> ord;

    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;

        y += ccls[x] * k;

        if (y == nxt[x]) {
            if (!(y % k)) {
                ccls[x]++;
            }

            nxt[x]++;

            ord[y].push_back(x);
        } 
    } 

    vector<bool> used(n + 1, 0);
    for (auto it = ord.rbegin(); it != ord.rend(); it++) {
        for (int c : it->second) {
            if (!used[c]) {
                cout << c << " ";
            }
            used[c] = true;
        }
    }
    cout << endl;

    return 0;
}