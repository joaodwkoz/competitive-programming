#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n), aux(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        aux[i] = arr[i];
    }

    sort(aux.begin(), aux.end());

    for (int &x : arr) {
        x = lower_bound(aux.begin(), aux.end(), x) - aux.begin() + 1;
    }\

    for (int x : arr) {
        cout << x << endl;
    }

    return 0;
}