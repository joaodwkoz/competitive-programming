#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n + 1, 0);

    for (int i = 1; i < 2 * n; i++) {
        int a;
        cin >> a;
        arr[a]++;
    }

    for (int i = 1; i <= n; i++) 
        if (arr[i] == 1) 
            cout << i << endl;

    return 0;
}