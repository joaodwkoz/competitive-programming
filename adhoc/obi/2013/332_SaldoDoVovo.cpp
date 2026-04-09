#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;

    int mn = s, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s += x;
        mn = min(mn, s);
    }

    cout << mn << endl;

    return 0;
}