#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, i, r;
    cin >> n >> m >> i >> r;

    vector<bool> infs(n + 1, 0);    
    infs[i] = true;

    vector<vector<int>> rs(m + 1);
    for (int j = 1; j <= m; j++) {
        int a, p;
        cin >> a;
        
        for (int k = 1; k <= a; k++) {
            cin >> p;
            rs[j].push_back(p);
        }
    }

    for (auto p : rs[r]) {
        infs[p] = true;
    }

    for (int j = r + 1; j <= m; j++) {
        bool hasInfs = false;

        for (auto p : rs[j]) {
            if (infs[p]) {
                hasInfs = true;
                break;
            }
        }
        
        if (hasInfs) {
            for (auto p : rs[j]) {
                infs[p] = true;
            }
        }
    }

    int ans = 0;
    for (int j = 1; j <= n; j++) {
        ans += (int)(infs[j]);
    }

    cout << ans << endl;

    return 0;
}