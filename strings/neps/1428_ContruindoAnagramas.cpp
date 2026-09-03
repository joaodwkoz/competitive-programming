#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    sort(x.begin(), x.end());

    do {
        cout << x << endl;
    } while (next_permutation(x.begin(), x.end()));

    return 0;
}