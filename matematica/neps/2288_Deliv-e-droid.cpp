#include <iostream> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, c;
    cin >> p >> c;

    int res = p * 50 - c  * 10 + (p > c ? 500 : 0);

    cout << res << endl;
 
    return 0;
}