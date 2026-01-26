#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;   
    }

    vector<pair<int, int>> aux = arr;

    sort(aux.begin(), aux.end());

    for (int i = 0; i < n; i++) {
        int maxId;
        int minId;

        if (aux[0].second == i) {
            maxId = aux[1].first;
        } else {
            maxId = aux[0].first;
        }

        if (aux[n - 1].second == i) {
            minId = aux[n - 2].first;
        } else {
            minId = aux[n - 1].first;
        }

        printf("%d\n", max(abs(maxId - arr[i].first), abs(minId - arr[i].first)));
    }

    return 0;
}