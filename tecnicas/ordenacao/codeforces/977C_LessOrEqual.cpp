#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

typedef long long ll;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int &x : arr) {
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    if (!k) {
        if (arr[0] == 1) {
            cout << -1 << endl;
        } else {
            cout << arr[0] - 1 << endl;
        }
        return 0;
    }
    
    cout << (arr[k] == arr[k - 1] ? -1 : arr[k - 1]) << endl;
    
    return 0; 
}