#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    } 

    return a.first > b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int tc = 1;

    while(t--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        vector<int> arr(13, 0);
        arr[a]++; arr[b]++; arr[c]++; arr[d]++; arr[e]++;

        vector<pair<int, int>> qtds;

        for (int i = 1; i <= 13; i++)
            if (arr[i]) 
                qtds.push_back({ i, arr[i] });

        sort(qtds.begin(), qtds.end(), comp);

        int ans = 0;

        if (qtds.size() == 5 && qtds[0].first - qtds[4].first == 4) {
            ans = qtds[4].first + 200;
        } else if (qtds.size() == 2 && qtds[0].second == 4) {
            ans = qtds[0].first + 180;
        } else if (qtds.size() == 2 && qtds[0].second == 3) {
            ans = qtds[0].first + 160;
        } else if (qtds.size() == 3 && qtds[0].second == 3) {
            ans = qtds[0].first + 140;
        } else if (qtds.size() == 3 && qtds[0].second == 2) {
            ans = qtds[0].first * 3 + qtds[1].first * 2 + 20;
        } else if (qtds.size() == 4 && qtds[0].second == 2) {
            ans = qtds[0].first;
        }
    
        if (tc > 1)
            cout << endl;

        cout << "Teste " << tc++ << endl << ans << endl;
    }

    return 0;
}