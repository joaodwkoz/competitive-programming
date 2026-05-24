#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int MAXN = 1.5e6;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<bool> sieve(MAXN, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i < MAXN; i++) {
        if (sieve[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                sieve[j] = false;
            }
        }
    }

    vector<int> pos(MAXN);
    int cnt = 0;
    for (int i = 2; i < MAXN; i++) {
        if (sieve[i]) {
            pos[i] = ++cnt;
        }
    }

    int n, x;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        cout << pos[x] << "\n";
    }

    return 0;
}