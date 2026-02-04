#include <iostream>

using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 10;

int arr[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll ans = 0;
    int at = -1, ant = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i]) {
            ant = at;
            at = i;
        }
        ans += (1LL * at - 1LL * ant);
    }

    cout << ans << endl;

    return 0;
}