#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    while (cin >> n && n) {
        for (int i = 1; i <= n; i++) {
            cin >> num;

            pq.push({ num, i });

            if (pq.size() > 2) {
                pq.pop();
            }
        }

        cout << pq.top().second << endl;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> aux;

        swap(aux, pq);
    }

    return 0;
}