#include <iostream>

using namespace std;

int fats[8] = {40320, 5040, 720, 120, 24, 6, 2, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
     
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        if (n >= fats[i]) {
            ans += (n / fats[i]);
            n %= fats[i];
        }
    }

    cout << ans << endl;

    return 0;
}