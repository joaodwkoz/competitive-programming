#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n;
    cin >> n;

    vector<int> divs;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        int num = 0;
        for (int j = 0; j < s.size(); j++) {
            num = (num * 2 + (s[j] - '0')) % x;
        }

        if (num == 0) {
            divs.push_back(x);
        }
    }

    if (divs.empty()) {
        cout << "Nenhum" << endl;
    } else {
        sort(divs.begin(), divs.end());
        for (int i = 0; i < divs.size(); i++) {
            cout << divs[i] << " ";
        }
        cout << endl;
    }

    return 0;
}