#include <iostream>
#include <string>

using namespace std;

bool isSeq(string seq, string s, int len) {
    auto nxt = [&](string s){
        int idx = (int) s.size() - 1;

        while (idx >= 0 && s[idx] == '9') {
            s[idx] = '0';
            idx--;
        }

        if (idx < 0) {
            return "1" + s;
        } 

        s[idx]++;

        return s;
    };

    string esp = nxt(s);

    int pos = len;
    while (pos < (int) seq.size()) {
        int len = (int) esp.size();

        if (pos + len > (int) seq.size()) {
            return false;
        }

        string curr = seq.substr(pos, len);

        if (curr != esp) {
            return false;
        }

        esp = nxt(curr);
        pos += len;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    s.resize(n);

    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    for (int len = 1; len <= n; len++) {
        string t = s.substr(0, len);

        if (isSeq(s, t, len)) {
            cout << t << endl;
            return 0;
        }
    }

    return 0;
}