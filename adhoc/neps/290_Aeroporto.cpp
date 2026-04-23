#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void add(vector<int>& ans, int& bst, int val, int id) {
    if (val < bst) {
        return;
    }

    if (val > bst) {
        ans.clear();
    }
    
    bst = val;
    ans.push_back(id);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, v, tc = 1;
    while (cin >> a >> v && a && v) {
        int bst = -1;
        vector<int> arr(a + 1, 0), ans;

        for (int i = 1; i <= v; i++) {
            int x, y;
            cin >> x >> y;
            arr[x]++;
            arr[y]++;
            add(ans, bst, arr[x], x);
            add(ans, bst, arr[y], y);
        }

        sort(ans.begin(), ans.end());

        cout << "Teste " << tc++ << endl;
        for (int val : ans) {
            cout << val << " ";
        } 
        cout << endl << endl;
    }

    return 0;
}