#include <iostream>
#include <algorithm>

using namespace std;

int get_val(char x) {
    if (x == 'J') {
        return 1;
    } else if (x == 'O') {
        return 2;
    }
    return 3;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    sort(s.begin(), s.end(), [](const char& a, const char& b){
        return get_val(a) < get_val(b);
    });

    cout << s << endl;

    return 0;
}