#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Lance {
    string nm;
    int val;
    int id;

    bool operator < (const Lance &other) const {
        if (val != other.val) {
            return val > other.val;
        }   
        return id < other.id;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, idx = 1;
    cin >> n;

    vector<Lance> lcs(n);
    for (Lance &x : lcs) {
        cin >> x.nm >> x.val;
        x.id = idx++;
    }

    sort(lcs.begin(), lcs.end());

    cout << lcs[0].nm << endl << lcs[0].val << endl;

    return 0;
}