#include <iostream>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 12;
    int b = 18;

    pair<int, int> steps[3] = {{2, -2}, {4, -4}, {-5, 7}};
    int curStep = 0;

    while (true) {
        cout << "a = " << a << " <-> b = " << b << endl;

        if (a == 38 && b == 32) break;

        pair<int, int> step = steps[curStep % 3];

        a += step.first;
        b += step.second;

        curStep++;
    }

    return 0;
}