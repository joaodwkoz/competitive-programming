#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, tc = 1;
    while (cin >> n >> r && n && r) {
        if (tc > 1) {
            cout << endl;
        }

        queue<int> q;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }

        for (int i = 1; i <= r; i++) {
            int p, o;
            cin >> p >> o;

            queue<int> nq;
            for (int j = 1; j <= p; j++) {
                int x;
                cin >> x;

                if (x == o) {
                    nq.push(q.front());
                }

                q.pop();
            }
            
            q = move(nq);
        }

        cout << "Teste " << tc++ << endl << q.front() << endl;
    }

    return 0;
}