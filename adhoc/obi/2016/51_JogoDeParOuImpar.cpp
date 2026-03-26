#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, d1, d2;
    cin >> p >> d1 >> d2;

    cout << (!((d1 + d2) % 2) ? p : 1 - p)  << endl;

    return 0;
}