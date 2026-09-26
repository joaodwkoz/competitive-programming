#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
     
    for (int i = 1; i * i <= n; i++) {
        cout << i * i << " ";
    }
    cout << endl;

    return 0;
}