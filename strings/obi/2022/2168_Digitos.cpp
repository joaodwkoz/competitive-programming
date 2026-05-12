#include <iostream>
#include <string>

using namespace std;

bool isASeq(string seq, string s, int len){
    auto nextNum = [&](string s){
        int idx = (int) s.size() - 1;

        while(idx >= 0 && s[idx] == '9'){
            s[idx] = '0';
            idx--;
        }

        if(idx < 0) return "1" + s;
        s[idx]++;

        return s;
    };

    string esp = nextNum(s);

    int pos = len;
    while(pos < (int) seq.size()){
        int len = (int) esp.size();
        if(pos + len > (int) seq.size()) return false;

        string currStr = seq.substr(pos, len);

        if(currStr != esp){
            return false;
        }

        esp = nextNum(currStr);
        pos += len;
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s = "";
    char x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        s.push_back(x);
    }

    for(int len = 1; len <= n; len++){
        string t = s.substr(0, len);

        if(isASeq(s, t, len)){
            cout << t << endl;
            return 0;
        }
    }

    return 0;
}