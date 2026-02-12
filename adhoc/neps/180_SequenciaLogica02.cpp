#include <iostream>
#include <utility>

using namespace std;

pair<int, int> steps[2] = {{1, -2}, {0, 4}};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0, b = 1;
    int cnt = 0;
    while (true) {
        cout << "a = " << a << " <-> b = " << b << endl;

        if (a == 31 && b == 59) {
            break;
        }

        a += steps[cnt % 2].first, b += steps[cnt % 2].second;

        cnt++;
    }

    return 0;
}