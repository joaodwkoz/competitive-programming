#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1e7 + 2e6 + 100;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> sieve(MAXN, true);
    sieve[0] = sieve[1] = false;

    int cnt = 0, ans;
    for (int i = 2; i * i < MAXN; i++) {
        if (sieve[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                sieve[j] = false;
            }
        }
    }

    for (int i = 2; i < MAXN; i++) {
        if (sieve[i]) {
            cnt++;
            if (cnt == n) {
                ans = i;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}