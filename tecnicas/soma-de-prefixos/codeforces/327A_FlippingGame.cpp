#include <iostream>
#include <vector>

using namespace std; 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    } 

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + arr[i - 1];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int b = (i == 1 ? 0 : pref[i - 1]);
            int d = (j - i + 1 - (pref[j] - pref[i - 1]));
            int a = (j == n ? 0 : pref[n] - pref[j]);
            ans = max(ans, b + d + a);        
        }
    }

    cout << ans << endl;

    return 0; 
}