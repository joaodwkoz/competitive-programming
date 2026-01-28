#include <iostream>
#include <string>
#include <utility>

using namespace std;

pair<int, int> movs[8] = {
    { 2, -1 },
    { 1, -2 },
    { -1, -2 },
    { -2, -1 },
    { -2, 1 },
    { -1, 2},
    { 1, 2 },
    { 2, 1 },
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string st, en;
    cin >> st >> en;

    for (auto& mov : movs) {
        char c1 = (char) st[0] + mov.second;
        char c2 = (char) st[1] + mov.first;
        string newst = string(1, c1) + string(1, c2);
        if (newst == en) {
            cout << "VALIDO" << endl;
            return 0;
        }
    }

    cout << "INVALIDO" << endl;

    return 0;
}