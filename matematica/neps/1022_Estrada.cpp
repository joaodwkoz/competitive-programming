#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;
    
    vector<int> cities(n);

    for (int i = 0; i < n; i++) {
        cin >> cities[i];
    }
    sort(cities.begin(), cities.end());

    double minViz = 1e6 + 10;
    
    minViz = min(minViz, (cities[0] + cities[1]) / 2.0);
    for (int i = 1; i < n - 1; i++) {
        minViz = min(minViz, (cities[i] - cities[i - 1]) / 2.0 + (cities[i + 1] - cities[i]) / 2.0);
    } 
    minViz = min(minViz, t - cities[n - 1] + (cities[n - 1] - cities[n - 2]) / 2.0);

    cout << fixed << setprecision(2) << minViz << endl;

    return 0;
}