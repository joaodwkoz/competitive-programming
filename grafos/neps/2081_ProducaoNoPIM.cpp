#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<int> ind(n, 0);
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        ind[y]++;
    }    

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        if (!ind[i]) {
            pq.push(i);
        }
    }

    vector<int> ord;
    while (!pq.empty()) {
        auto t = pq.top();
        pq.pop();
        ord.push_back(t);
        for (int viz : adj[t]) {
            ind[viz]--;
            if (!ind[viz]) {
                pq.push(viz);
            }
        }
    }

    if (ord.size() == n) {
        for (int v : ord) {
            cout << v << endl;
        }
    } else {
        cout << "*" << endl;
    }

    return 0;
}