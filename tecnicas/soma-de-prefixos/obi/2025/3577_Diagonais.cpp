#include <iostream>
#include <map>

using namespace std; 

typedef long long ll;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int n;
    cin >> n;

    map<int, int> diff;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        diff[i + x + 1] -= 1;
        diff[i + 1] += 1;
    }

    int ans = 0;
    int curr = 0;

    for (auto val : diff) {
        curr += val.second;
        ans = max(ans, curr);
    }

    cout << ans << endl;
    
    return 0; 
}