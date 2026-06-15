#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n >> k >> s;

    int r = 0;
    for (char x : s) {
        if (x == 'R') {
            r++;
        }
    }

    cout << (r == k ? "W" : "R") << endl;

    return 0;
}