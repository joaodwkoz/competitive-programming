#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
    } 

    vector<vector<int>> pref(10, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            pref[j][i] = pref[j][i-1];
        }
        pref[pos[i - 1]][i]++;
    }

    vector<int> movs(m);
    for (int i = 0; i < m; i++) {
        cin >> movs[i];
        movs[i]--;
    }

    vector<int> ans(10, 0);
    int lst = movs[0];
    for (int i = 1; i < m; i++) {
        int l = lst, r = movs[i];

        if (l > r){
            swap(l, r);
            r--;
        } else {
            l++;
        }

        for (int j = 0; j < 10; j++) {
            ans[j] += pref[j][r + 1] - pref[j][l];
        }

        lst = movs[i];
    }

    ans[pos[movs[0]]]++;
    for (int a : ans) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}