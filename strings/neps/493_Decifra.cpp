#include <iostream>
#include <string>

using namespace std;

char dic[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y;
    getline(cin, x);
    getline(cin, y);

    for (int i = 0; i < 26; i++) {
        dic[x[i] - 'a'] = i;
    }

    string ans = "";
    for (char c : y) {
        ans += dic[c - 'a'] + 'a';
    }

    cout << ans << endl;

    return 0;
}