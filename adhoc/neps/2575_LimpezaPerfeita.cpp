#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        int qds = 0;
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= 10; k++) {
                char y;
                cin >> y;
                if (y == '#') qds++;
            }
        }

        cout << (qds % 2 ? "Just give up already!" : "Further investigation is needed.") << endl;
    }

    return 0;
}