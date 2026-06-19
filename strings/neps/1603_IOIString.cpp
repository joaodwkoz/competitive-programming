#include <iostream> 

using namespace std;

char ioichs[2] = {'I', 'O'};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != ioichs[i % 2]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}