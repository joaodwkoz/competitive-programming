#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> ts;
    for (int i = 0; i < 16; i++) {
        ts.push(i);
    }

    queue<int> nts;
    int x, y;
    for (int i = 1; i <= 15; i++) {
        cin >> x >> y;

        int a = -1, b = -1;
        a = ts.front();
        ts.pop();

        b = ts.front();
        ts.pop();

        if (i == 15) {
            cout << (char)((x > y ? a : b) + 'A') << endl;
        } else {
            nts.push(x > y ? a : b);

            if (ts.empty()) {
                ts = nts;
                int len = nts.size();
                for (int j = 0; j < len; j++) {
                    nts.pop();
                }
            }
        }
    }

    return 0;
}