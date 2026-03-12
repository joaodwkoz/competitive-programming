#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int s = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s += x;
    }

    cout << s - n << endl;

    return 0;
}