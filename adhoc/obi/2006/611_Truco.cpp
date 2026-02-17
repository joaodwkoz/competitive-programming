#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string mp = "7890123000546";
    
    int adal = 0;
    int bern = 0;
    for (int i = 1; i <= n; i++) {
        int ad[3], bd[3];
        cin >> ad[0] >> ad[1] >> ad[2] >> bd[0] >> bd[1] >> bd[2];

        int a = 0, b = 0;
        for (int j = 0; j < 3; j++) {
            if (mp[ad[j] - 1] - '0' >= mp[bd[j] - 1] - '0') {
                a++;
            } else {
                b++;
            }
        }

        if (a > b) {
            adal++;
        } else {
            bern++;
        }
    }

    cout << adal << " " << bern << endl;

    return 0;
}