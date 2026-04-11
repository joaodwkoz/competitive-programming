#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, a, b, c;
    cin >> s >> a >> b >> c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (s >= arr[i]) {
            s-= arr[i];
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}