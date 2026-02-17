#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c;
    cin >> n >> c;

    vector<int> mark(n + 1, -1);
    for (int i = 1; i <= c; i++) {
        int k, num, x;
        cin >> k >> num;
        for (int j = 1; j <= num; j++) {
            cin >> x;
            mark[x] = k;
        }
    } 

    for (int i = 1; i <= n; i++) {
        if (mark[i] == -1) {
            cout << i << endl;
        }
    }

    return 0;
}