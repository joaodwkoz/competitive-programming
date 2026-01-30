#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        string x;
        cin >> x;
        for (int j = 1; j <= 5; j++) {
            if (x[j - 1] == 'Y') {
                mp[j]++;
            }
        }
    }

    int mx = 0;
    vector<int> ans;

    for (int i = 1; i <= 5; i++) {
        if (mp[i] > mx) {
            ans = { i };
            mx = mp[i];
        } else if (mp[i] == mx) {
            ans.push_back(i);
        }
    }

    for (int i = 1; i <= ans.size(); i++) {
        if (i != ans.size()) {
            cout << ans[i - 1] << ",";
        } else {
            cout << ans[i - 1] << endl;
        }
    }

    return 0;
}