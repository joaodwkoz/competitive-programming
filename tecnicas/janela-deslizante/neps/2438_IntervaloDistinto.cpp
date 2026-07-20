#include <iostream>
#include <unordered_set>

using namespace std;

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

    unordered_set<int> vals;
    int l = 0, ans = 1;
    for (int r = 0; r < n; r++) {
        while (vals.count(arr[r])) {
            vals.erase(arr[l]);
            l++; 
        }

        ans = max(ans, r - l + 1);
        vals.insert(arr[r]);
    }

    cout << ans << endl;

    return 0;
}