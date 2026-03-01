#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        double res = (double) (d - b) / (c - a);
        string ans = to_string(res);
        string form_ans = ans.substr(0, ans.find('.') + 3);
        replace(form_ans.begin(), form_ans.end(), '.', ',');

        cout << form_ans << endl;
    }

    return 0;
}