#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m;
    cin >> n >> k >> m;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    vector<ll> f(k + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> f[i];
    }

    for (int i = n + 1; i <= k; i++) {
        ll s = 0;
        for (int j = 0; j < n; j++) {
            s = (s + ((arr[j] % m) * (f[i - j - 1] % m))) % m;
        }
        f[i] = s;
    }

    cout << f[k] << endl;

    return 0;
}