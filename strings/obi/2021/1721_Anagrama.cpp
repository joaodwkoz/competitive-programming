#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    int n;
    cin >> n >> ws;
    
    getline(cin, a);
    getline(cin, b);

    vector<int> cnt_a(26, 0), cnt_b(26, 0);

    for (char x : a) {
        if (x >= 'a' && x <= 'z') {
            cnt_a[x - 'a']++;
        }
    }

    for (char x : b) {
        if (x >= 'a' && x <= 'z') {
            cnt_b[x - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (cnt_a[i] != cnt_b[i]) {
            cout << "N" << endl;
            return 0;
        }
    }

    cout << "S" << endl;

    return 0;
}