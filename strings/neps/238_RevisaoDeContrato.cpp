#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char d;
    string n;
    while (cin >> d >> n && d != '0' && n != "0") {
        string ans = n;
        ans.erase(remove(ans.begin(), ans.end(), d), ans.end());
        int st = 0;
        while (ans[st] == '0') st++;
        ans = ans.substr(st, ans.size() - st);
        cout << (!ans.empty() ? ans : "0") << endl;
    }

    return 0;
}