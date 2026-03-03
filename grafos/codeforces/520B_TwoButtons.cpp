#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int l = 2 * max(n, m) + 5;

    queue<pair<int, int>> q;
    q.push({ n, 0 });

    vector<bool> visited(l, false);
    visited[n] = true;

    while (!q.empty()) {
        auto t = q.front();
        q.pop();

        if (t.first == m) {
            cout << t.second << endl;
            return 0;
        }

        if (t.first >= 0 && t.first <= l) {
            if (t.first * 2 <= l && !visited[t.first * 2]) {
                q.push({ t.first * 2, t.second + 1 });
                visited[t.first * 2] = true;
            }

            if (t.first - 1 >= 0 && !visited[t.first - 1]) {
                q.push({ t.first - 1, t.second + 1 });
                visited[t.first - 1] = true;
            }
        }
    }

    return 0;
}