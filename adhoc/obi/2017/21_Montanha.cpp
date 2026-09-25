#include <iostream>

using namespace std;

const int MAXN = 1010;

int hs[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> hs[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if (hs[i] < hs[i - 1] && hs[i] < hs[i + 1]) {
            cout << "S" << endl;
            return 0;
        }
    }

    cout << "N" << endl;

    return 0;
}