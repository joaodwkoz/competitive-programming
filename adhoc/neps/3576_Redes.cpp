#include <iostream>

using namespace std;

const int MAX_I = 1e5 + 10;

int nums[MAX_I];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        nums[x]++;
    }

    int ans = 0;
    for (int i = 1; i <= MAX_I; i++) {
        if (nums[i]) {
            ans += nums[i] / 2;
        }
    }

    cout << ans << endl;

    return 0;
}