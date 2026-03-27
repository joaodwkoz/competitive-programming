#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 2) {
            cnt += 1;
        }
    }

    cout << n % 2 << endl << cnt % 2 << endl;

    return 0;
}