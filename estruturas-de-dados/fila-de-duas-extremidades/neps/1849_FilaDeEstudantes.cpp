#include <iostream>
#include <deque>
#include <string>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, op;
    cin >> n;

    deque<pair<int, string>> q;
    for (int i = 1; i <= n; i++) {
        cin >> op;

        if (op < 3) {
            pair<int, string> e;

            cin >> e.first >> e.second;

            (op == 1 ? q.push_front(e) : q.push_back(e));
        } else {
            if (q.empty()) {
                cout << "0 0" << endl;
            } else {
                pair<int, string> e = op == 3 ? q.front() : q.back();

                (op == 3 ? q.pop_front() : q.pop_back());

                cout << e.first << " " << e.second << endl; 
            }
        }
    }

    return 0;
}