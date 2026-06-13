#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <utility>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tc = 1;
    while (cin >> n && n) {
        vector<pair<int, string>> arr(n);
        for (int i = 0; i < n; i++) {
            string nm;
            cin >> nm;

            int s = 0, mx = -1e9, mn = 1e9, x;
            for (int i = 1; i <= 12; i++) {
                cin >> x;
                s += x;
                mx = max(mx, x);
                mn = min(mn, x);
            }

            arr[i] = {s - mx - mn, nm};
        }

        sort(arr.begin(), arr.end(), [](auto a, auto b) {
            return a.first > b.first;
        });

        vector<tuple<int, int, string>> aux(n);
        for (int i = 0; i < n; i++) {
            int pos = lower_bound(arr.begin(), arr.end(), make_pair(arr[i].first, ""), [](auto a, auto b) {
                return a.first > b.first;
            }) - arr.begin() + 1;
            aux[i] = {pos, arr[i].first, arr[i].second};
        }

        sort(aux.begin(), aux.end());

        cout << "Teste " << tc++ << endl;
        for (auto val : aux) {
            cout << get<0>(val) << " " << get<1>(val) << " " << get<2>(val) << endl;
        }

        cout << endl;
    } 

    return 0;
}