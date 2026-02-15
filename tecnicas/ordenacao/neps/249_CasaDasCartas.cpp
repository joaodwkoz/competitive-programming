#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<pair<int, int>, int>> arr(n);
    for (auto &x : arr) {
        int y;
        cin >> y;
        x = {{y % m, y / m}, y };
    }

    sort(arr.begin(), arr.end(), [](const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b){
        if (a.first.first != b.first.first) {
            return a.first.first > b.first.first;
        }
        return a.first.second > b.first.second;
    });

    for (auto val : arr) {
        cout << val.second << " ";
    }
    cout << endl;
 
    return 0;
}