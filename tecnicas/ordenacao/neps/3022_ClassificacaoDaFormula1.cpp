#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, string>> arr(n);
    for (auto &x : arr) {
        cin >> x.second >> x.first;
    }

    sort(arr.begin(), arr.end(), greater<>());

    for (auto x : arr) {
        cout << x.second << endl;
    }

    return 0;
}