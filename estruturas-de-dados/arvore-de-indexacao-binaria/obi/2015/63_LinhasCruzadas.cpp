#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int n;
vector<int> bit;

void update(int x) {
    for (int i = x; i <= n; i += i & -i) {
        bit[i] += 1;
    }
}

int get_sum(int x) {
    int s = 0;
    for (int i = x; i >= 1; i -= i & -i) {
        s += bit[i];
    }
    return s;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    bit.assign(n + 1, 0);

    ll ans = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        ans += 1LL * (get_sum(n) - get_sum(x));
        update(x);
    }

    cout << ans << endl;

    return 0;
}