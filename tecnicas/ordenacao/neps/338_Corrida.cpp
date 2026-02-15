#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> cars(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            cars[i] = { cars[i].first + x, i };
        }
    }

    sort(cars.begin(), cars.end());

    cout << cars[0].second + 1 << endl << cars[1].second + 1 << endl << cars[2].second + 1 << endl;
 
    return 0;
}