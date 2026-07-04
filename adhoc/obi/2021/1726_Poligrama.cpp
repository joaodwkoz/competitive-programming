#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int cnt[26];
int currCnt[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++){
        char a = s[i];
        cnt[a - 'a']++;
    }

    int firstLet = -1;
    int curr = -1;
    for(int i = 0; i < 26; i++){
        if(cnt[i] != 0){
            firstLet = i;
            curr = cnt[i];
            break;
        }
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] != 0 && i != firstLet){
            curr = gcd(curr, cnt[i]);
        }
    }

    if(curr == 1){
        cout << "*" << endl;
        return 0;
    }

    string currStr = "";
    for(int i = 0; i < n; i++){
        if(cnt[s[i] - 'a'] != 0 && currCnt[s[i] - 'a'] < cnt[s[i] - 'a'] / curr){
            currStr += s[i];
            currCnt[s[i] - 'a']++;
        }
    }

    cout << currStr << endl;

    return 0;
}