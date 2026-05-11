#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, a, b;
    cin >> s >> a >> b;

    int rem = s - a;
    
    int res = 250 + (rem > 0 ? ((rem + b - 1) / b) * 100  : 0);

    cout << res << endl;

    return 0;
}