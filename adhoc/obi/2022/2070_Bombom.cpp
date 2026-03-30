#include <iostream>

using namespace std;

int get_card_val(string c, char dom) {
    int val = 0;

    if (c[0] == 'A') {
        val = 10;
    } else if (c[0] == 'J') {
        val = 11;
    } else if (c[0] == 'Q') {
        val = 12;
    } else {
        val = 13;
    }

    if (c[1] == dom) {
        val += 4;
    }

    return val;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string c, l1, l2, l3, e1, e2, e3;
    cin >> c >> l1 >> l2 >> l3 >> e1 >> e2 >> e3;

    char dom = c[1];

    int l = 0, e = 0;
    for (string x : {l1, l2, l3}) {
        l += get_card_val(x, dom);
    }

    for (string x : {e1, e2, e3}) {
        e += get_card_val(x, dom);
    }

    cout << (l < e ? "Edu" : l == e ? "empate" : "Luana") << endl;

    return 0;
}