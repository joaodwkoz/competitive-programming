#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, a, f, p;
    cin >> v >> a >> f >> p;

    int arr[3] = {a, f, p};
    sort(arr, arr + 3);

    int curr = 0;
    for (int i = 0; i < 3; i++) {
        curr += arr[i];
        if (curr > v) {
            cout << i << endl;
            return 0;
        }
    }

    cout << 3 << endl;

    return 0;
}