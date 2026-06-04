#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, s, d;
    cin >> a >> s >> d;

    int res = ((a - d) + (s - d) - 1) / (s - d); 

    cout << res << endl;

    return 0;
}