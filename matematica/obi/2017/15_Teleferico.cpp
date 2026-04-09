#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, a;
    cin >> c >> a;

    int res = (a + (c - 1) - 1) / (c - 1);

    cout << res << endl;

    return 0;
}