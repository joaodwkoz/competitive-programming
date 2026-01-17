#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }

    cout << mp.begin()->first << endl;

    return 0;
}