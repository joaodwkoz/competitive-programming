#include <iostream>

const int MAXN = 10;

int cnt[MAXN];

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a, b, c, x;
    a = b = c = 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        cnt[x]++;
        if (cnt[1] && cnt[3] && cnt[5]) {
            cnt[1]--; cnt[3]--; cnt[5]--;
            a++;
        }
        if (cnt[1] && cnt[4]) {
            cnt[1]--; cnt[4]--;
            b++;
        }
        if (cnt[2] && cnt[4]) {
            cnt[2]--; cnt[4]--;
            c++;
        }
    }

    cout << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;

    return 0;
}