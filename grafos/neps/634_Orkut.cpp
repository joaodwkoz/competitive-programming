#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tc = 1;
    while (cin >> n && n) {
        map<string, int> mp;
        vector<string> nms(n + 1);
        string s;
        for (int i = 1; i <= n; i++) {
            cin >> s;
            nms[i] = s;
            mp[s] = i;
        }

        vector<vector<int>> adj(n + 1);
        for (int i = 1; i <= n; i++) {
            string x;
            int k;
            cin >> x >> k;
            if (k) {
                for (int j = 1; j <= k; j++) {
                    string y;
                    cin >> y;
                    adj[mp[y]].push_back(mp[x]);
                }
            }
        }

        vector<int> ind(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            for (int f : adj[i]) {
                ind[f]++;
            }
        }

        queue<int> q;
        for (int i = 1; i <= n; i++) {
            if (!ind[i]) {
                q.push(i);
            }
        }

        vector<int> ord;
        while (!q.empty()) {
            int t = q.front();
            q.pop();
            ord.push_back(t);
            for (int f : adj[t]) {
                ind[f]--;
                if (!ind[f]) {
                    q.push(f);
                }
            }
        }

        cout << "Teste " << tc++ << endl;
        if (ord.size() == n) {
            for (int f : ord) {
                cout << nms[f] << " ";
            }
            cout << endl;
        } else {
            cout << "impossivel" << endl;
        }
        cout << endl;
    }

    return 0;
}