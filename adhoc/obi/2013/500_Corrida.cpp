#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = -1;
    double mnt = 1e9;

    for (int i = 1; i <= 2; i++) {
        int n, d, v;
        cin >> n >> d >> v;
        
        double mps = v / 3.6;
        if ((double) d / mps < mnt) {
            mnt = d / mps;
            ans = n;
        }
    }

    cout << ans << endl;

    return 0;
}