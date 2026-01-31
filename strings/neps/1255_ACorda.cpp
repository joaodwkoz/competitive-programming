#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string n1, n2;
    cin >> n1 >> n2;

    if (n1 != "Reluew" || n2 != "Markinhos") {
        cout << "Nao eh possivel descriptografar!" << endl;
        return 0;   
    }

    int n;
    string x;
    cin >> n >> x;

    for (char y : x) {
        char nwchar = y + n;
        cout << nwchar;
    }
    cout << endl;

    return 0;
}