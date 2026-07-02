#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    cout << ((n - 1) * 5 + 1 <= m ? 'S' : 'N') << endl;

    return 0;
}