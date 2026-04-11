#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<bool> ans(n + 1, false);
    for (int i = 1; i <= m; i++) {
        int p, d;
        cin >> p >> d;

        for (int k = p; k >= 1; k -= d) {
            ans[k] = true;
        }
        for (int k = p; k <= n; k += d) {
            ans[k] = true;
        }
        
        ans[p] = true;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}