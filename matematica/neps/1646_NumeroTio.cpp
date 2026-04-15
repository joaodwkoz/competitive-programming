#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; 

    if (n <= 1 || (n > 2 && !(n % 2)) || (n > 3 && !(n % 3))) {
        cout << "Normal" << endl;
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (!(n % i) || !(n % (i + 2))) {
            cout << "Normal" << endl;
            return 0;
        }
    }

    cout << "Tio" << endl;

    return 0;
}