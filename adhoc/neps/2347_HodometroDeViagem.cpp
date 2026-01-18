#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> dists(n);
    for (int &x : dists) cin >> x;

    int sm = accumulate(dists.begin(), dists.end(), 0);

    vector<int> anss;

    for (int i = 0; i < n; i++) 
        anss.push_back(sm - dists[i]);

    sort(anss.begin(), anss.end());
    anss.erase(unique(anss.begin(), anss.end()), anss.end());

    cout << anss.size() << endl;

    for (int x : anss) 
        cout << x << " ";
    cout << endl;

    return 0;
}