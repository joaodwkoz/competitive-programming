#include <iostream> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int res =  min(n, k) * 1500 + min(max(n - k, 0), 60) * 1500 + max(n - k - 60, 0) * 3000;

    cout << res << endl;
 
    return 0;
}