#include <iostream> 
#include <vector> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) {
        cin >> x;
    }

    for (int &x : b) {
        cin >> x;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans += (int)(a[i] <= b[j]);
        }
    }

    cout << ans << endl;
 
    return 0;
}