#include <iostream>
#include <string>

using namespace std;

string newnum(int n) {
    string strnum = to_string(n);
    
    int t = strnum.size(), i = 0, p = 0;
    for (char x : strnum) {
        int v = x - '0';
        i += (int)(v % 2);
        p += (int)(!(v % 2));
    }
    string strnew = to_string(t) + to_string(i) + to_string(p);
    
    return strnew;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int curr = stoi(newnum(n));

    if (curr == n) {
        cout << 0 << endl;
        return 0;
    }

    int lst = n, ans = 0;
    do {
        lst = curr;
        curr = stoi(newnum(curr));
        ans++;
    } while (lst != curr);

    cout << ans << endl;

    return 0;
}