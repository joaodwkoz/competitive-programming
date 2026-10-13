#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(2);

    int h;
    cin >> h;

    double d = max(h - 3, 0) * 1.5;

    cout << (d > 0 ? "Voce perdera " + to_string(d).substr(0, 3) + " coracoes ao pular de uma altura de " + to_string(h) + " blocos" : "Voce nao sofrera dano ao pular") << endl;
  
    return 0;
}