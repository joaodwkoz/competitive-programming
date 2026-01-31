#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    vector<int> arr;
    while (cin >> x) {
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Apesar de muitas moedinhas o maior produto encontrado foi " << arr[0] * arr[1] << endl;

    return 0;
}
