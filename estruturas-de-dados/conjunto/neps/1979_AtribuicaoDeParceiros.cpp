#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> arr1(n), arr2(n);
    for (auto &x : arr1) cin >> x;
    for (auto &x : arr2) cin >> x;

    map<string, string> mp;

    for (int i = 1; i <= n; i++) {
        string p1, p2;
        p1 = arr1[i - 1];
        p2 = arr2[i - 1];
        if (p1 == p2 || mp.count(p2) && mp[p2] != p1) {
            cout << "bad" << endl;
            return 0;
        }
        mp[p1] = p2;
    }

    cout << "good" << endl;

    return 0;
}