#include <iostream>

using namespace std; 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int a, n;
    cin >> a >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += (a * x >= 4e7);
    }

    cout << ans << endl;

    return 0; 
}