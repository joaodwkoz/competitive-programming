#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> pos(n);
    for (int &x : pos) {
        cin >> x;
    }

    vector<int> alts(n);
    for (int &x : alts) {
        cin >> x;
    }

    stack<int> at;
    vector<int> ans(n, 0);

    for (int i = n - 1; i >= 0; i--) {
        int curr = 0;

        while (!at.empty() && pos[i] + alts[i] >= pos[at.top()]) {
            curr += ans[at.top()];
            at.pop();
        }

        ans[i] = curr + 1;
        at.push(i);
    }

    for (int v : ans) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}