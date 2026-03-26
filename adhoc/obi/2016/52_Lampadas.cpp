#include <iostream>

using namespace std;

int cnt[2];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x - 1]++;
    }

    cout << ((cnt[1] + cnt[0]) % 2) << endl << (cnt[1] % 2) << endl;

    return 0;
}