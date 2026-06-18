#include <iostream> 
#include <map> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        mp[x]++;
    }
    
    int mn = 1e9, ans = -1;
    for (auto [k, v] : mp) {
        if (v < mn) {
            mn = v;
            ans = k;
        }  else if (v == mn && k < ans) {
            ans = k;
        }
    }

    cout << ans << endl;

    return 0;
}