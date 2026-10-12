#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<vector<string>> times(t);
    priority_queue<pair<int, string>> q;

    string s;
    int h;
    for (int i = 1; i <= n; i++) {
        cin >> s >> h;
        q.push({ h, s });
    }

    int idx = 0;
    while (!q.empty()) {
        auto [h, p] = q.top();
        q.pop();
        times[idx].push_back(p);
        idx = (idx + 1) % t;
    }

    for (int i = 0; i < t; i++) {
        sort(times[i].begin(), times[i].end());
    }

    for (int i = 0; i < t; i++) {
        cout << "Time " << i + 1 << endl;

        for (auto pl : times[i]) {
            cout << pl << endl;
        }

        cout << endl;
    }

    return 0;
}