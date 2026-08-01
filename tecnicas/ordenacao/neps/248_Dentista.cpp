#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
    cin >> n;

    vector<pair<int, int>> hs(n);
    for (int i = 0; i < n; i++) {
        int s, f;
        cin >> s >> f;
        hs[i] = {s, f};
    }
    sort(hs.begin(), hs.end(), comp);

    int lst = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (hs[i].first >= lst){
            lst = hs[i].second;
            c++;
        }
    }

    cout << c << endl;

    return 0;
}