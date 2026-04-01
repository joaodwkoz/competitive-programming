#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, n;
    cin >> a >> n;

    int res = (a / (n + 2) * 2);

    cout << res << endl;

    return 0;
}