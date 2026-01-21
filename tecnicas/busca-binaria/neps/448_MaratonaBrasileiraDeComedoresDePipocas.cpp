#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int INF = 1e9;
const int MAXN = 1e5;

int scs[MAXN];
int n, c, t;

bool isPossible(int maxT) {
    int cur = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if ((scs[i] + t - 1) / t > maxT) return false;

        if ((cur + scs[i] + t - 1) / t <= maxT) {
            cur += scs[i];
        } else {
            cur = scs[i];
            cnt++;
        }
    }

    return cnt <= c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> c >> t;

    for (int i = 0; i < n; i++)
        cin >> scs[i];

    int ans = -1;
    int l = 1;

    int h = 0;
    for (int i = 0; i < n; i++) h += (scs[i] + t - 1) / t;
    
    while (l <= h) {
        int m = l + (h - l) / 2;

        if (isPossible(m)) {
            ans = m;
            h = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << ans << endl;

    return 0;
}