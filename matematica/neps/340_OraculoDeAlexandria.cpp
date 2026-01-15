#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 1; i <= n; i++) {
        string fat;
        getline(cin, fat);

        int cnt = 0;
        int num = 0;
        int mul = 1;

        for (int j = fat.size() - 1; j >= 0; j--) {
            if (isdigit(fat[j])) {
                num += (fat[j] - '0') * mul;
                mul *= 10;
            } else if (fat[j] == '!') {
                cnt++;
            }
        }

        int ans = num;
        int aux = cnt;

        while(num - aux >= 1) {
            ans *= (num - aux);
            aux += cnt;
        }

        cout << ans << endl;
    }

    return 0;
}