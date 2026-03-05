#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n), ans(n);
        for (int &x : arr) {
            cin >> x;
        }

        sort(arr.begin(), arr.end());

        int st = -1, en = -1, mn = 1e9;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] < mn) {
                mn = arr[i + 1] - arr[i];
                st = i;
                en = i + 1;
            }
        }

        cout << arr[st] << " ";

        int i = 0, j = en + 1;
        while (j < n) {
            cout << arr[j++] << " ";
        }
        while (i < st) {
            cout << arr[i++] << " ";
        }

        cout << arr[en] << endl;
    }

    return 0; 
}