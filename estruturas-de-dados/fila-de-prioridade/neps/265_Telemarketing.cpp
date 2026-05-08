#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    for (int i = 1; i <= n; i++) {
        pq.push({0, i});
    }

    vector<int> ans(n + 1, 0);
    int t;
    for (int i = 1; i <= l; i++) {
        cin >> t;

        auto [time, id] = pq.top();
        pq.pop();

        pq.push({time + t, id});
        ans[id]++;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << i << " " << ans[i] << endl;
    }

    return 0;
}