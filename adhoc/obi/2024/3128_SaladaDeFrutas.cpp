#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, n;
    cin >> r >> n;

    map<int, int> mxs;
    for (int i = 1; i <= n; i++) {
        int t, v;
        cin >> t >> v;
        if (mxs.count(t)) {
            mxs[t] = min(mxs[t], v);
        } else {
            mxs[t] = v;
        }
    }
    
    vector<int> aux;
    for (auto val : mxs) {
        aux.push_back(val.second);
    }

    sort(aux.begin(), aux.end());

    int ans = 0;
    int curr = 0;
    for (int i = 0; i < aux.size(); i++) {
        if (curr + aux[i] <= r) {
            curr += aux[i];
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}