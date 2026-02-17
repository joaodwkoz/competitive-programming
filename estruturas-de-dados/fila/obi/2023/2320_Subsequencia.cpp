#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    queue<int> q;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    bool ok = true;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        while(!q.empty() && q.front() != x) {
            q.pop();
        }

        bool isEqual = !q.empty() && q.front() == x;

        if (isEqual) {
            q.pop();
        } else {
            ok = false;
            break;
        }
    }

    cout << (ok ? "S" : "N") << endl;
}