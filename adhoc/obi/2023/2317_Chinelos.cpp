#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    int p;
    cin >> p;

    int ans = 0, x;
    for (int i = 1; i <= p; i++) {
        cin >> x;  
        ans += (int)(arr[x - 1] >= 1);
        arr[x - 1]--;
    }

    cout << ans << endl;

    return 0;
}