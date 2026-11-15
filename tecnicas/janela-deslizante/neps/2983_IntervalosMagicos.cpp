#include <iostream>

using namespace std;

const int MAXN = 200100;
int arr[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    int l = 0;
    int curr = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        curr += arr[r];

        while (l < r && curr > k) {
            curr -= arr[l];
            l++;
        }

        if (curr == k) {
            ans++;  
        } 
    }

    cout << ans << endl;

    return 0;
}