#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    vector<int> lis;
    for (int i = 0; i < s.size(); i++) {
        auto it = upper_bound(lis.begin(), lis.end(), s[i]);
        int pos = it - lis.begin();
        if (pos == lis.size()) {
            lis.push_back(s[i]);
        } else {
            lis[pos] = s[i];
        }
    }

    cout << lis.size() << endl;

    return 0;
}