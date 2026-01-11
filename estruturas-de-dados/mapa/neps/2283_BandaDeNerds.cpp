#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

typedef long long ll;

using namespace std;

struct Musico {
    string inst;
    int hab;
};

bool comp(Musico& a, Musico& b) {
    return a.hab > b.hab;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<Musico> mcs(n);
    for (auto &x : mcs) {
        cin >> x.inst >> x.hab;
    }

    sort(mcs.begin(), mcs.end(), comp);

    map<string, int> pos;

    ll sm = 0;
    for (auto mc : mcs) {
        if (pos[mc.inst] == k) {
            continue;
        }

        pos[mc.inst]++;
        sm += mc.hab * 1LL;
    }

    cout << sm << endl;

    return 0;
}