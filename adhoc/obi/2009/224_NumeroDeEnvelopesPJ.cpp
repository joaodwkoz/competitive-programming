#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mn = 1e9;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mn = min(mn, x);
    }

    cout << mn << endl;

    return 0;
}