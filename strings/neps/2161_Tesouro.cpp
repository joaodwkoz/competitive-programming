#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    for (int i = 1; i <= n; i++) {
        char a;
        cin >> a;
        if (a == 'C') {
            x--;
        } else if (a == 'D') {
            y++;
        } else if (a == 'E') {
            y--;
        } else {
            x++;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}