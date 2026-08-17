#include <iostream>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int x;
    map<int, int> freq;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        freq[x]++;
    }

    int mn = 1e9;
    for (int i = 1; i <= k; i++) {
        mn = min(freq[i], mn);
    }

    cout << mn << endl;

    return 0;
}