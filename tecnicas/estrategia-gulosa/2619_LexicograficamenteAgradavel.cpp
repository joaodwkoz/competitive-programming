#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string x;
    cin >> x >> k;

    vector<string> chars(k);
    
    for (int i = 0; i < x.size(); i++) {
        char y = x[i];
        chars[i % k].push_back(y);
    }

    for (int i = 0; i < k; i++) {
        sort(chars[i].begin(), chars[i].end());
    }

    for (int i = 0; i < x.size(); i++) {
        cout << chars[i % k][i / k];
    }
    cout << endl;

    return 0;
}