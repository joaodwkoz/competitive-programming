#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int res = t * 2 * 365 * 35;
    
    int a = res / 1440 / 365, d = (res / 1440) % 365, h = (res / 60) % 24, m = res % 60;

    cout << a << " ano(s), " << d << " dia(s), " << h << " hora(s) e " << m << " minuto(s)" << endl;

    return 0;
}