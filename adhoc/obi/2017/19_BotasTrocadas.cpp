#include <iostream>
#include <algorithm>

using namespace std;

int arr[61][2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        char y;
        cin >> x >> y;
        arr[x][y - 'D'] += 1;
    }

    int ans = 0;
    for (int i = 30; i <= 60; i++) {
        ans += min(arr[i][0], arr[i][1]);
    }

    cout << ans << endl;

    return 0;
}