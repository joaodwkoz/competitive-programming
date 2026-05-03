#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int a = 0, b = 0;
    for (char x : s) {
        a += (int)(x == 'A');
        b += (int)(x == 'B');
    }

    cout << (a > b ? "A" : a == b ? "Tie" : "B") << endl;

    return 0;
}