#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int lost = 0, lst = 0, st = 0, x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i == 1) {
            st = x;
        } else if (x - lst > 10) {
            lost += x - lst - 10;
        }
        lst = x;
    }
 
    cout << (lst + 10) - st - lost  << endl;

    return 0;
}