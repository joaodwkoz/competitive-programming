#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    
    cout << (a + (7 * b) <= 30 ? 1 : 0) << endl;

    return 0;
}