#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) arr[i] = i;

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x] = y;
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}